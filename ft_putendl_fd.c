/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:17:10 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:17:12 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Writes the string 's' in the file descriptor 'fd'
*/

void	ft_myputchar(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

void	ft_myputstr(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_myputchar(s[i], fd);
		i++;
	}
	return ;
}

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_myputstr(s, fd);
		ft_myputchar('\n', fd);
	}
	return ;
}
