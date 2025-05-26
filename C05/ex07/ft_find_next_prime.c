/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:36:22 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/08 16:06:08 by dzhukov          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	count;

	count = nb;
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main()
// {

// 	printf("Next prime : %d\n", ft_find_next_prime(28));

// 	return (0);
// }
