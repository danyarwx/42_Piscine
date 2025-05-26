/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:08:14 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/08 13:50:45 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power == 0)
	{
		return (1);
	}
	res = nb;
	i = 0;
	while (i < power - 1)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

// #include <stdio.h>

// int	main()
// {

// 	printf("The power is : %d\n", ft_iterative_power(-1, -1));

// 	return (0);
// }
