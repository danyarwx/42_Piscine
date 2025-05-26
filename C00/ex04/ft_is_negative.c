/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:26:22 by dzhukov           #+#    #+#             */
/*   Updated: 2025/04/30 17:28:27 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	po;
	char	ne;

	po = 'P';
	ne = 'N';
	if (n >= 0)
	{
		write(1, &po, 1);
	}
	else
	{
		write(1, &ne, 1);
	}
}
