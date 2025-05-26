/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:41:01 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/11 20:11:06 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaration of all the functions used in this file:

int	check_input(char *str);
void	str_to_arr(char *str, int *arr);


// This function checks the input if its only numbers, only 16 of them and if all are separated by spaces
int	check_input(char *str)
{
	int i;
	int count_num;
	int count_sp;

	count_num = 0;
	count_sp = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4' && (str[i - 1] == ' ' || i == 0))
		{
			count_num++;
			i++;
		}
		else if (str[i] == ' ')
		{
			count_sp++;
			i++;
		}
		else
			return (0);
	}
	if (count_num == 16 && count_sp == 15)
		return (1);
	else
		return (0);
}

// This function converts the initial input string into an array of integers
// For more convenient use

void	str_to_arr(char *str, int *arr)
{
	int	i;
	int	c_arr;

	i = 0;
	c_arr = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			arr[c_arr] = str[i] - '0';
			c_arr++;
		}
		i++;
	}
}
