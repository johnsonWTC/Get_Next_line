/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 17:17:00 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/16 16:33:13 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_argcount(char const *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static int		ft_strl(char const *str, char c)
{
	int		i2;
	int		count2;

	i2 = 0;
	count2 = 0;
	while (str[i2] == c)
		i2++;
	while (str[i2] != c && str[i2] != '\0')
	{
		count2++;
		i2++;
	}
	return (count2);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ft_argv;
	int		words;
	int		i3;

	if (!s)
		return (NULL);
	i3 = 0;
	words = ft_argcount((const char *)s, c);
	ft_argv = (char **)malloc(sizeof(*ft_argv)
			* (ft_argcount((const char *)s, c) + 1));
	if (ft_argv == NULL)
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		ft_argv[i3] = ft_strsub((const char *)s, 0,
				ft_strl((const char *)s, c));
		if (ft_argv[i3] == NULL)
			return (NULL);
		s = s + ft_strl(s, c);
		i3++;
	}
	ft_argv[i3] = NULL;
	return (ft_argv);
}
