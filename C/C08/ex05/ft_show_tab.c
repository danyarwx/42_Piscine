/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:41:32 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/21 18:37:25 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	c = (nb % 10) + '0';
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	count;
	int	i;

	count = 0;
	while (par[count].str != NULL)
	{
		i = 0;
		while (par[count].str[i] != '\0')
		{
			write(1, &par[count].str[i], 1);
			i++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[count].size);
		write(1, "\n", 1);
		i = 0;
		while (par[count].copy[i] != '\0')
		{
			write(1, &par[count].copy[i], 1);
			i++;
		}
		write(1, "\n", 1);
		count++;
	}
}

// int	main(void)
// {
// 	char				*str_arr[3];
// 	struct s_stock_str	*p_str;

// 	char *str1 = "When I look at your heavens";
// 	char *str2 = "The moon and the stars";
// 	char *str3 = "That you've set in place";
// 	str_arr[0] = str1;
// 	str_arr[1] = str2;
// 	str_arr[2] = str3;
// 	int size = 3;
// 	p_str = ft_strs_to_tab(size, str_arr);
// 	ft_show_tab(p_str);
// }
