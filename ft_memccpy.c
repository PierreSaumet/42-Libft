/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:14:23 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:15:37 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copy 'n' bytes from 'src' to 'dst' stopping whe the character 'c'
**	is found.
**	Returns NULL if 'c' wasn't found in the first 'n' characters of 'src'
**	Returns a pointer to the next character in 'ds't after 'c'.
*/

void	*ft_memccpy(void *dst, const void *src, int c,
		size_t n)
{
	unsigned int	i;
	unsigned char	*src2;
	unsigned char	*dst2;
	unsigned char	b;

	i = 0;
	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	b = (unsigned char)c;
	while (i < n)
	{
		if (src2[i] == b)
		{
			dst2[i] = src2[i];
			return (&dst2[i + 1]);
		}
		else
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (NULL);
}
