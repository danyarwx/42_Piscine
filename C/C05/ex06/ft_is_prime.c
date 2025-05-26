/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:26:56 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/08 15:37:49 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	flag;
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	i = 1;
	flag = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			flag++;
		}
		i++;
	}
	if (flag == 2)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main()
// {

// 	printf("Is it a prime : %d\n", ft_is_prime(19));

// 	return (0);
// }
