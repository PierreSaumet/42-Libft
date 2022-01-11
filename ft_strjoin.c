/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:19:24 by psaumet           #+#    #+#             */
/*   Updated: 2019/11/22 11:19:26 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Joins the two pointers 's1' and 's2' and create a new one from them.
**	It uses 3 other functions.
**	Returns the new pointer.
*/

int		ft_stlen(char const *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
//usells ?
char	*ft_my_malloc(char *res, int i, int j)
{
	if (!(res = malloc(sizeof(char *) * (i + j + 1))))
		return (NULL);
	return (res);
}

char	*ft_end(char *res, int k, int l)
{
	res[k + l + 1] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*res;

	if ((s1 == NULL || s2 == NULL))
		return (NULL);
	i = ft_stlen(s1);
	j = ft_stlen(s2);
	k = 0;
	l = 0;
	if (!(res = malloc(sizeof(char *) * (i + j + 1))))
		return (NULL);
	while (k <= i)
	{
		res[k] = s1[k];
		k++;
	}
	while (l <= j)
	{
		res[k + l - 1] = s2[l];
		l++;
	}
	return (ft_end(res, k, l));
}
