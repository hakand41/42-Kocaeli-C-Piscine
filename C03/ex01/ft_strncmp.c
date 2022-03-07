/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeger <hdeger@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:28:08 by hdeger            #+#    #+#             */
/*   Updated: 2022/02/21 15:38:32 by hdeger           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	c;
	int				fark;

	c = 0;
	fark = 0;
	while ((c < n) && !fark && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		fark = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !fark && (s1[c] == '\0' || s2[c] == '\0'))
		fark = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (fark);
}
