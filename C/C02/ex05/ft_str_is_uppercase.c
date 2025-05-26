/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:00:28 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/03 19:40:09 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 90)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "CHECK";
// 	int res = ft_str_is_uppercase(str);
// 	printf("The result is : %d\n", res);

// 	return 0;
// }
