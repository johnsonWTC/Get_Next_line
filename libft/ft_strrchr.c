/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:40:15 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/11 09:38:33 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i > 0)
	{
		if (s[i] == c)
			break ;
		else
			i--;
	}
	if (s[i] == c)
		return ((char *)s + i);
	else
		return (NULL);
}
