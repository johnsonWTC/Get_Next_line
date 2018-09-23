/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 09:21:24 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/11 09:23:58 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*s1;

	i = 0;
	if (s == 0 || s == '\0')
		return (NULL);
	s1 = ft_strnew(len);
	if (s1 == 0 || s1 == '\0')
		return (NULL);
	while (i != len)
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
