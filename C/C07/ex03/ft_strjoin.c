/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:38:28 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/21 11:48:42 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	if (size == 0)
		return (1);
	i = 0;
	while (sep[i])
	{
		i++;
	}
	return ((count + 1) + (size - 1) * i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	comp;

	comp = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*final_str;

	len = str_len(size, strs, sep);
	final_str = (char *)malloc(len * sizeof(char));
	if (final_str == NULL)
		return (NULL);
	final_str[0] = '\0';
	if (size <= 0)
	{
		return (final_str);
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(final_str, strs[i]);
		if (i != size - 1)
			ft_strcat(final_str, sep);
		i++;
	}
	final_str[len - 1] = '\0';
	return (final_str);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	char *string;
// 	char sep[] = "";
// 	string = ft_strjoin(argc - 1, argv, sep);

// 	printf("The string : %s\n", string);
// 	printf("The last symbol : '%d'\n", string[21]);
// 	free(string);
// 	return 0;
// }
// Removed the line *final_str = '\0';
