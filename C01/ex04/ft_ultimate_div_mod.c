/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeger <hdeger@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:28:33 by hdeger            #+#    #+#             */
/*   Updated: 2022/02/13 14:33:05 by hdeger           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bolme;
	int	kalan;

	if (kalan != 0)
	{
		bolme = (*a) / (*b);
		kalan = (*a) / (*b);
		*a = bolme;
		*b = kalan;
	}
}
