/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:15:12 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:15:14 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Compares the first 'n' bytes of 's1' and 's2'.
**	If a difference occurs, returns an integer which is the difference
**	of the bytes.
**	Otherwise return an 0 integer.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	res;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	res = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			res = str1[i] - str2[i];
			return (res);
		}
		i++;
	}
	return (0);
}
