/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:04:19 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/29 11:42:56 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_readline(char **str, char **line)
{
	char *temp;

	if ((*str)[0] == '\0')
		return (0);
	if ( ft_strchr(*str, '\n') != NULL)
	{
		*(ft_strchr(*str, '\n')) = '\0';
		*line = ft_strdup(*str);
		temp = ft_strdup(ft_strchr(*str, '\0') + 1);
		free(*str);
		if (temp)
		{
			*str = ft_strdup(temp);
			free(temp);
		}
	}
	else
	{
		*line = ft_strdup(*str);
		ft_memdel((void **)str);
	}
	return (1);
}

int get_next_line(const int fd, char **line)
{
	
	char		s[BUFF_SIZE + 1];
	static char	 *s1[FD_LIMIT];
	int		rd;
	char *joint;
    if (fd < 0 || line == 0 || read (fd, s, 0) < 0)
		return (-1);
	if (!(s1[fd]))
		s1[fd] = ft_strnew(0);

	while (ft_strchr(s1[fd], '\n') == NULL)
	{
		rd = read (fd, s, BUFF_SIZE);
		s[rd] = '\0';
		if (rd ==  0)
			break ;
		joint = ft_strjoin(s1[fd], s);
		free(s1[fd]);
		s1[fd] = strdup(joint);
		if ((!s1[fd]))
			s1[fd] = ft_strnew(0);
		free (joint);
	}
	return (ft_readline(&s1[fd], line));
}

