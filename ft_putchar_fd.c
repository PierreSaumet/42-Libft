/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:16:52 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:16:54 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Writes the character 'c' into the file descriptor 'fd'.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
