/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:44:09 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/19 20:08:06 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				j;
	int				to_append;
	int				tried;
	unsigned int	dst_len;

	dst_len = ft_strlen(dest);
	to_append = size - dst_len - 1;
	j = 0;
	while (src[j] != '\0' && j < to_append)
	{
		dest[dst_len + j] = src[j];
		j++;
	}
	if (size != 0 && dst_len <= size)
	{
		dest[dst_len + j] = '\0';
	}
	if (dst_len >= size)
		tried = size + ft_strlen(src);
	else
		tried = dst_len + ft_strlen(src);
	return (tried);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str1[40] = "My God ";
// 	char str2[] = "Why have you forsaken me?";
// 	int res1;

// 	char str3[40] = "My God ";
// 	char str4[] = "Why have you forsaken me?";
// 	int res2;

// 	res1 = ft_strlcat(str1, str2, 10);
// 	res2 = strlcat(str3, str4, 10);

// 	printf("My function result is : %s\n", str1);
// 	printf("My function return value is : %d\n", res1);

// 	printf("Library function result is : %s\n", str3);
// 	printf("Library function return value is : %d\n", res2);

// 	return 0;
// }
