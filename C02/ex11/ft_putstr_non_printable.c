/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:23:28 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/18 17:28:40 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned char c)
{
	char	*base;
	char	num;
	char	bs;

	bs = '\\';
	base = "0123456789abcdef";
	write(1, &bs, 1);
	num = base[c / 16];
	write(1, &num, 1);
	num = base[c % 16];
	write(1, &num, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

// int main()
// {
// 	char str[] = "Hello\t\nHow are you?";

// 	ft_putstr_non_printable(str);

// 	return 0;
// }
