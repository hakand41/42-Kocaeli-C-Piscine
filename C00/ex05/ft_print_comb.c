/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeger <hdeger@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:08:55 by hdeger            #+#    #+#             */
/*   Updated: 2022/02/11 12:55:37 by hdeger           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_comma(char d, char e, char f)
{
	if (d != '7' || e != '8' || f != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	g;
	char	h;
	char	i;

	g = '0';
	while (g <= '7')
	{
		h = g + 1;
		while (h <= '8')
		{
			i = h + 1;
			while (i <= '9')
			{
				ft_putchar(g, h, i);
				ft_comma(g, h, i);
				i++;
			}
			h++;
		}
		g++;
	}
}	
