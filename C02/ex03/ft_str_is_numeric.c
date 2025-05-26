/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:56:22 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/01 17:59:18 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 57)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

// #include <stdio.h>
// int main() {

// 	char string[] = "123";
// 	// char string[] = "aa838aa";
// 	// char string[] = "";

// 	int result = ft_str_is_numeric(string);
// 	printf("The result is : %d\n", result);

// 	return 0;
// }
