/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:52:04 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/01 17:45:27 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 122)
		{
			return (0);
		}
		else if (str[count] > 90 && str[count] < 97)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

// #include <stdio.h>
// int main() {

// 	char string[] = "aaaAAAzzz";
// 	// char string[] = "aa838aa";
// 	// char string[] = "";

// 	int result = ft_str_is_alpha(string);
// 	printf("The result is : %d\n", result);

// 	return 0;
// }
