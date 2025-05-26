/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:22:05 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/21 19:21:10 by dzhukov          ###   ########.fr       */
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

int count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int	len;
	int	w_len;
	int	i;
	int	j;
	int	str_count;
	char	**res;

	len = count_words(str);
	res = (char **)malloc((len + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (str[j] == ' ')
			j++;
		while (str[j] != ' ')
			w_len++;
		res[i] = malloc((w_len + 1) * sizeof(char));
		while (str[i] && str[i]!= ' ')
		{
			res[i][str_count] = str[j];
			str_count++;
		}


		i++;
	}

}


#include <stdlib.h>

int				ft_isspace(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t'
			|| c == '\r' || c == '\v' || c == '\f') ? 1 : 0);
}

static int		r_size(char *s)
{
	unsigned int len;

	len = 0;
	while (*s)
	{
		if (ft_isspace(*s))
			++s;
		else
		{
			++len;
			while (*s && !ft_isspace(*s))
				++s;
		}
	}
	return (len);
}

char			**ft_split(char *s)
{
	int		i = 0;
	int		j = 0;
	int		k;
	char	**r;
	int		w_len = 0;

	if (!(r = (char **)malloc(sizeof(char*) * (r_size(s) + 1))))
		return (0);
	while (s[i] && j < r_size(s))
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		while (s[i] && !ft_isspace(s[i]))
		{
			w_len++;
			i++;
		}
		if (!(r[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (0);
		k = 0;
		while (w_len)
			r[j][k++] = s[i - w_len--];
		r[j++][k] = '\0';
	}
	return (r);
}



#include <stdio.h>
int main()
{
	char str[] = "The moon and the stars ";
	printf("The word count is : %d\n", count_words(str));

	return 0;
}
