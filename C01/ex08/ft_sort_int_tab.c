/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 22:44:06 by dzhukov           #+#    #+#             */
/*   Updated: 2025/04/30 22:46:03 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	changes;
	int	count;
	int	temp;

	changes = 1;
	count = 0;
	while (changes > 0)
	{
		count = 0;
		changes = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				temp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = temp;
				changes = 1;
			}
			count++;
		}
	}
}
