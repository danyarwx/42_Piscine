/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:30:40 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/03 20:48:01 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main() {
// 	char str1[] = "hello";
// 	char str2[6];

// 	ft_strcpy(str2, str1);

// 	int i = 0;
// 	while (i < 6) {
// 		printf("%c", str2[i]);
// 		i++;
// 	}

// 	return 0;
// }
