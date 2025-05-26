/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:18:26 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/08 19:42:05 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb == 2)
	{
		return (2);
	}
	res = nb;
	i = 0;
	while ((nb - 1) > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}

// #include <stdio.h>

// int	main()
// {

// 	printf("The factorial is : %d\n", ft_iterative_factorial(5));

// 	return (0);
// }
