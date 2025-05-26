/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:00:05 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/18 19:11:29 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*point;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	point = 0;
	return (point);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str1[] = "hello world and mars";
// 	char str2[] = "mars";

// 	printf("The library function result : %p\n", strstr(str1, str2));
// 	printf("My function result : %p\n", ft_strstr(str1, str2));

// 	return 0;
// }
