/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_clues.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:34:13 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/11 20:10:06 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaration of all the functions used in this file:

void	fill_4_top_col(int grid[4][4], int col);
void	fill_4_bot_col(int grid[4][4], int col);
void	fill_4_left_row(int grid[4][4], int row);
void	fill_4_right_row(int grid[4][4], int row);
void	fill_clues(int grid[4][4], int *clues);
void	fill_ones(int grid[4][4], int *clues);

// If we face 4 in the clues, it means that the row or the column would be
// In the following sequence: (1, 2, 3, 4)

void fill_4_top_col(int grid[4][4], int col)
{
	int i;
	int row;

	row = 0;
	i = 1;
	while (i <= 4)
	{
		grid[row][col] = i;
		i++;
		row++;
	}
}
void fill_4_bot_col(int grid[4][4], int col)
{
	int i;
	int row;

	row = 3;
	i = 1;
	while (i <= 4)
	{
		grid[row][col] = i;
		i++;
		row--;
	}
}
void fill_4_left_row(int grid[4][4], int row)
{
	int i;
	int col;

	col = 0;
	i = 1;
	while (i <= 4)
	{
		grid[row][col] = i;
		i++;
		col++;
	}
}
void fill_4_right_row(int grid[4][4], int row)
{
	int i;
	int col;

	col = 3;
	i = 1;
	while (i <= 4)
	{
		grid[row][col] = i;
		i++;
		col--;
	}
}

//Main clues function that is dependent on where the clues are located

void	fill_clues(int grid[4][4], int *clues)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i >= 0 && i <= 3 && clues[i] == 4)
		{
			fill_4_top_col(grid, i);
		}
		else if (i >= 4 && i <= 7 && clues[i] == 4)
		{
			fill_4_bot_col(grid, i % 4);
		}
		else if (i >= 8 && i <= 11 && clues[i] == 4)
		{
			fill_4_left_row(grid, i % 4);
		}
		else if (i >= 12 && i <= 15 && clues[i] == 4)
		{
			fill_4_right_row(grid, i % 4);
		}
		i++;
	}
}

// Fills number 4 if the clue is 1

void	fill_ones(int grid[4][4], int *clues)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i >= 0 && i <= 3 && clues[i] == 1)
		{
			grid[0][i] = 4;
		}
		else if (i >= 4 && i <= 7 && clues[i] == 1)
		{
			grid[3][i % 4] = 4;
		}
		else if (i >= 8 && i <= 11 && clues[i] == 1)
		{
			grid[i % 4][0] = 4;
		}
		else if (i >= 12 && i <= 15 && clues[i] == 1)
		{
			grid[i % 4][3] = 4;
		}
		i++;
	}
}
