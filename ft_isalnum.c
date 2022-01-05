/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:07:13 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:07:19 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if the given argument is a unsigned char "0 to 9", "a to z", or
**	"A to Z".
**	Returns false if not.
*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
