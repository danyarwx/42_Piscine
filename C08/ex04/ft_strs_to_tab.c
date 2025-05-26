/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:39:45 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/21 08:19:52 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	return (ft_strcpy(dest, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					count;
	struct s_stock_str	*ptr;

	ptr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (ptr == NULL)
		return (NULL);
	count = 0;
	while (count < ac)
	{
		ptr[count].size = ft_strlen(av[count]);
		ptr[count].str = av[count];
		ptr[count].copy = ft_strdup(av[count]);
		if (ptr[count].copy == NULL)
		{
			while (--count >= 0)
				free(ptr[count].copy);
			free(ptr);
			return (NULL);
		}
		count++;
	}
	ptr[count].size = 0;
	ptr[count].str = NULL;
	ptr[count].copy = NULL;
	return (ptr);
}
