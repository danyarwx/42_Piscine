/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:16:04 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/06 11:33:03 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "hello";
// 	char str2[] = "hellu";

// 	int res = ft_strcmp(str1, str2);

// 	printf("The result is : %d\n", res);

// 	return 0;
// }
