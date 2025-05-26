/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:00:28 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/03 19:58:40 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = " -123';]delCHECK";
// 	ft_strupcase(str);
// 	printf("The result is : %s\n", str);

// 	return 0;
// }
