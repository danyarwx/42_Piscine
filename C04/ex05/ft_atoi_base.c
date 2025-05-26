/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:01:19 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/20 17:30:42 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	if_spaces(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
	{
		return (1);
	}
	return (0);
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
		if (temp == '+' || temp == '-' || temp == ' '
			|| (temp >= 9 && temp <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (temp == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	get_pos(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	if (!check_base(base))
		return (0);
	i = 0;
	while (if_spaces(str))
		str++;
	sign = 1;
	while (get_pos(*str, base) == -1)
	{
		if (!((*str == '-') || (*str == '+')))
			return (0);
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	while (get_pos(*str, base) >= 0)
	{
		result = result * ft_strlen(base) + get_pos(str[i], base);
		str++;
	}
	return (result * sign);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	char *base;
// 	char *str;
// 	int result;

// 	str = argv[1];
// 	base = argv[2];

// 	result = ft_atoi_base(str, base);
// 	printf("The result is : %d\n", result);

// 	return (0);
// }
