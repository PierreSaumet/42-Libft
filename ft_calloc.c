/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:06:43 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 13:31:45 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates memory for an array of "count" elements of "size" bytes each,
**	and returns a pointer to the allocated memory.
**	The memory is set to zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void			*str;

	if (!(str = malloc(count * size)))
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
