/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:19:42 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:19:51 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Concatenates strings, appends src to the end of dst.
**	it will append at most dstsize - strlen(dst - 1);
**	Returns the total length of the string.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	k = 0;
	if (src == NULL || dst == NULL)
		return (0);
	if (dstsize <= j)
		return (i + dstsize);
	else
		i = i + j;
	while (src[k] && j + 1 < dstsize)
	{
		dst[j] = src[k];
		j++;
		k++;
	}
	dst[j] = '\0';
	return (i);
}
