/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:32:10 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/16 15:18:21 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		a;
	char	*s1;

	if (s == 0)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	while (ft_spaces(s[i]))
		i++;
	if (s[i] == 0)
		return ("");
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	s1 = (char *)malloc(sizeof(char ) * (len - i + 1));
	if (s1 == 0)
		return (NULL);
	a = 0;
	while (s[i] && i != len)
	{
		s1[a++] = s[i++];
	}
	s1[a] = '\0';
	return (s1);
}
