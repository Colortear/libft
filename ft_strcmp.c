/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 18:41:32 by wdebs             #+#    #+#             */
/*   Updated: 2017/04/27 21:51:17 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] != 0 && s2[i] != 0)
		{
			if (s1[i] != s2[i])
				break ;
			i++;
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
