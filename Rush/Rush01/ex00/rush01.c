/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:26:51 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/11 20:08:44 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Library to test the output
#include <unistd.h>

// Declaration of all the functions used in this file:

int	check_input(char *str);
void	str_to_arr(char *str, int *arr);
void	fill_clues(int grid[4][4], int *clues);
void	fill_ones(int grid[4][4], int *clues);
int	is_safe(int grid[4][4], int row, int col, int num);
int	fill_grid(int grid[4][4], int row, int col);
int	are_clues_correct(int grid[4][4], int row, int col, int *clues);


// The main function from which other functions are called.
int main()
{
	// Test string:
	char string[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

	// Array of clues given in the string (empty for now)
	int clues[16];

	// 2D Array or GRID of the end result
	int grid[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	int res;

	// Check if string input is correct using check_input function
	res = check_input(string);

	// If the input is incorrect, print the error message
	if (res == 0)
	{
		write(1, "Error\n", 6);
	}
	else if (res == 1)
	{
		write(1, "Works!\n", 8);
	}

	/*
	The main logic:

		1. Pre-fill the matrix with rows and columns of (1, 2, 3, 4) and (4)

		2. Fill the rest of the matrix using backtracking, similar to sudoku

		3. Check if the output matrix is valid according to the clues,
			if not then backtrack and fill it again

		4. Output the correct matrix
	*/



	// Convert string to an array of clues
	str_to_arr(string, clues);

	// Fill the rows and columns where clue is equal to 4 (1, 2, 3, 4)
	fill_clues(grid, clues);

	// Fill the boxes where the clue is 1 with number 4
	fill_ones(grid, clues);

	// The main function that fills the rest of the array with recursion
	fill_grid(grid, 0, 0);


	// Output matrix using printf (Not allowed but for the sake of faster testing)
	int i = 0;
	int j = 0;

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}




// The main function that fills the array after pre-fill
// Uses the same backtracking algorithm as done in sudoku
// The prototype of the code was taken form algorithms for sudoku (check geeksforgeeks website)

int	fill_grid(int grid[4][4], int row, int col)
{
	// Base case: Reached nth column of last row
	if (row == 3 && col == 4)
		return (1);

	// If last column of the row go to next row
	if (col == 4)
	{
		row++;
		col = 0;
	}

	// If cell is already occupied then move forward
	if (grid[row][col] != 0)
	{
		return fill_grid(grid, row, col + 1);
	}

	int num = 1;
    while (num <= 4)
	{
        // If it is safe to place num at current position, place num
		// If it is not check other number: 1 through 4
        if (is_safe(grid, row, col, num)) {
            grid[row][col] = num;
            if (fill_grid(grid, row, col + 1))
			{
                return (1);
			}
            grid[row][col] = 0;
        }
		num++;
    }

  	return (0);
}

// This function is incomplete, it has the right idea of checking the row and the column but no idea how to implement

int	are_clues_correct(int grid[4][4], int row, int col, int *clues)
{
	int count_clues = 0;
	// This loop goes through the column, takes the first element as a reference point
	// and counts how many elements are bigger than the current one
	while (count_clues < 16)
	{
		int temp;
		int count_bigger = 0;
		int i = 1;
		temp = grid[0][col];
		while (i <= 3)
		{
			if (grid[i][col] > temp)
			{
				count_bigger++;
			}
			i++;
		}
		if (count_bigger != clues[count_clues] - 1)
		{
			return (0);
		}


		// This loop does the same thing but with the row.
		int temp2;
		int count_bigger2 = 0;
		int i2 = 1;
		temp2 = grid[row][0];
		while (i2 <= 3)
		{
			if (grid[row][i2] > temp2)
			{
				count_bigger2++;
			}
			i2++;
		}

		if (count_bigger2 != clues[count_clues + 8] - 1)
		{
			return (0);
		}
	}
	return (1);
}


int	is_safe(int grid[4][4], int row, int col, int num)
{
	// Check if number we want to put already exists in the row or column
	int x = 0;
	while (x <= 3)
	{
		if (grid[row][x] == num)
			return (0);
		if (grid[x][col] == num)
			return (0);
		x++;
	}
	printf("It is safe!\n");

	return (1);
}

