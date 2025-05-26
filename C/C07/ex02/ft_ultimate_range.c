/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:37:18 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/20 09:12:31 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(len * sizeof(int));
	if (*range != NULL)
	{
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (len);
	}
	else
	{
		return (-1);
	}
}

// #include <stdio.h>
// int main()
// {
// 	int ret_value;
// 	int *array;

// 	// array = malloc(4 * sizeof(int));
// 	if (array == NULL)
// 		return (1);

// 	ret_value = ft_ultimate_range(&array, 1, 6);

// 	int i = 0;
// 	while (i < ret_value / 4)
// 	{
// 		printf("The value is : %d\n", array[i]);
// 		i++;
// 	}
// 	free(array);

// 	return 0;
// }
