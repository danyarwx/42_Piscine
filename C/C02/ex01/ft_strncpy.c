/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:25:53 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/04 18:42:18 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main() {
// 	char str1[] = "hell";
// 	char str2[6];

// 	ft_strncpy(str2, str1, 6);

// 	int i = 0;
// 	while (i < 6) {
// 		printf("%c", str2[i]);
// 		i++;
// 	}

// 	return 0;
// }
