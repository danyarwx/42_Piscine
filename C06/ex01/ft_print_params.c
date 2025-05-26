/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:14:51 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/08 21:02:15 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;
	int	j;

	(void)argc;
	(void)argv;
	count = 1;
	while (count < argc)
	{
		j = 0;
		while (argv[count][j] != '\0')
		{
			write(1, &argv[count][j], 1);
			j++;
		}
		write(1, "\n", 1);
		count++;
	}
	return (0);
}
