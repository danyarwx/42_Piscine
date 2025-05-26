/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:40:58 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/18 12:19:52 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printch(int a, int b, int c)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = a + '0';
	c2 = b + '0';
	c3 = c + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (!(a == 7 && b == 8 && c == 9))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 <= 7)
	{
		n2 = n1 + 1;
		while (n2 <= 8)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				printch(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

// int main() {

// 	ft_print_comb();

// 	return 0;
// }
