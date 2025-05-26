/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:14:51 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/08 21:03:05 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	comp;

	comp = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	print_argv(int argc, char **argv)
{
	int	count;
	int	j;

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
}

int	main(int argc, char **argv)
{
	int		count;
	char	*temp;

	(void)argc;
	(void)argv;
	count = 2;
	while (count < argc)
	{
		if (ft_strcmp(argv[count - 1], argv[count]) > 0)
		{
			temp = argv[count - 1];
			argv[count - 1] = argv[count];
			argv[count] = temp;
			count = 2;
		}
		else
		{
			count++;
		}
	}
	print_argv(argc, argv);
	return (0);
}
