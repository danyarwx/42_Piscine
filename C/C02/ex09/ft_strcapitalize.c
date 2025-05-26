/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:00:28 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/19 17:43:45 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if_low(char *str, int i)
{
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
	}
}

void	if_upp(char *str, int i)
{
	if (str[i] >= 65 && str[i] <= 90)
	{
		str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	count = 1;
	while (str[count] != '\0')
	{
		if (!((str[count - 1] >= 48 && str[count - 1] <= 57)
				|| (str[count - 1] >= 65 && str[count - 1] <= 90)
				|| (str[count - 1] >= 97 && str[count - 1] <= 122)))
			if_low(str, count);
		else
			if_upp(str, count);
		count++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "4hi, HOW are you? 42 wORDS++++forty-two; fifty+and+onE";
// 	ft_strcapitalize(str);
// 	printf("The result is : %s\n", str);

// 	return 0;
// }
