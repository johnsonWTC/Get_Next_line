/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 13:35:56 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/29 12:21:00 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
    char *line;
    int fd;
    
    fd = open (argv[1], O_RDONLY);
//	get_next_line(fd, &line);
//	ft_putstr(line);
	if (argc == 1)
		ft_putstr("error");
//	return (0);

	while (get_next_line(fd, &line) == 1)
   {
       ft_putendl(line);
       free(line);
   }
}
