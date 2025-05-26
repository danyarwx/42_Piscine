/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:40:58 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/18 12:47:53 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = n / 10 + '0';
		write(1, &c, 1);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	arr[2];

	arr[0] = 0;
	while (arr[0] <= 98)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= 99)
		{
			print_num(arr[0]);
			write(1, " ", 1);
			print_num(arr[1]);
			if (!(arr[0] == 98 && arr[1] == 99))
			{
				write(1, ", ", 2);
			}
			arr[1] += 1;
		}
		arr[0] += 1;
	}
}

// int main() {

// 	ft_print_comb2();

// 	return 0;
// }
