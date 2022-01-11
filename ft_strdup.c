/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:18:58 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:19:00 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Simply duplicates 's1'.
**	Returns a new pointer 's2'.
*/

char	*ft_strdup(const char *s1)
{
	unsigned char	*s2;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	s2 = (unsigned char *)s1;
	while (s1[j])
		j++;
	if (!(s2 = malloc(j + 1)))
		return (0);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return ((char *)s2);
}
