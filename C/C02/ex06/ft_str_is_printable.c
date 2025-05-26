/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:00:28 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/04 13:16:36 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32)
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
// 	char str[] = " -123';]delCHECK";
// 	int res = ft_str_is_printable(str);
// 	printf("The result is : %d\n", res);

// 	return 0;
// }
