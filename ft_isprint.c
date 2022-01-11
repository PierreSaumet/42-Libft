/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:13:34 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:13:36 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if the 'c' is printable, from the ASCII characters.
**	Checks all characters excepts controles ones.
**	Returns true if it is printable, otherwise returns false.
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
