/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:17:55 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:17:57 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Write the string 's' into the file descriptor 'fd'
*/

void	ft_myputchar(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			ft_myputchar(s[i], fd);
			i++;
		}
	}
	return ;
}
