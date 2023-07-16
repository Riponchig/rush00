/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:25 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/16 16:21:45 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char c);

void	write_line(int x, char first, char mid, char last)
{
	int	i;

	if (x == 1)
	{
		ft_putchar(first);
	}
	if (x > 1)
	{
		ft_putchar(first);
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(mid);
			i++;
		}
		ft_putchar(last);
	}
	write(1, "\n", 1);
}

void	rush01(int x, int y)
{
	int	i;

	i = 0;
	if (y == 1)
	{
		write_line(x, '/', '*', '\\');
	}
	else if (y == 2)
	{
		write_line(x, '/', '*', '\\');
		write_line(x, '\\', '*', '/');
	}
	else if (y > 2)
	{
		write_line(x, '/', '*', '\\');
		while (i < y - 2)
		{
			write_line(x, '*', ' ', '*');
			i++;
		}
		write_line(x, '\\', '*', '/');
	}
}
