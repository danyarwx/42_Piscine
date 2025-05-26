/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:02:36 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/20 17:29:14 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	check_base(char *base)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	while (base[i])
	{
		temp = base[i];
		if (temp == '+' || temp == '-')
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (temp == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	num;

	num = nbr;
	len = ft_strlen(base);
	if (len < 2 || !check_base(base))
	{
		return ;
	}
	if (num < 0)
	{
		num = num * (-1);
		write(1, "-", 1);
	}
	if (num >= len)
		ft_putnbr_base(num / len, base);
	write(1, &base[num % len], 1);
}

// int main()
// {
// 	char base[] = "0123456789abcdef";
// 	// char base[] = "01";
// 	int num = 123;
// 	ft_putnbr_base(num, base);

// 	return 0;
// }
