/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:09:01 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/03 16:54:03 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	first_line(int x);
void	middle_part(int x, int y);
void	last_line(int x);
void	rush(int x, int y);

void	first_line(int x)
{
	int	count_first;

	count_first = 0;
	while (count_first < x)
	{
		if (count_first == 0)
		{
			ft_putchar('/');
		}
		else if (count_first == (x - 1))
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		count_first++;
	}
	ft_putchar('\n');
}

void	middle_part(int x, int y)
{
	int	count_middle;
	int	c_m_line;

	count_middle = 0;
	while (count_middle < (y - 2))
	{
		c_m_line = 0;
		while (c_m_line < x)
		{
			if (c_m_line == 0 || c_m_line == (x - 1))
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
			c_m_line++;
		}
		ft_putchar('\n');
		count_middle++;
	}
}

void	last_line(int x)
{
	int	count_last;

	count_last = 0;
	while (count_last < x)
	{
		if (count_last == 0)
		{
			ft_putchar('\\');
		}
		else if (count_last == (x - 1))
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		count_last++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	first_line(x);
	middle_part(x, y);
	if (y > 1)
	{
		last_line(x);
	}
	ft_putchar('\n');
}
