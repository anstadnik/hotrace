/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:08:50 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/03 16:59:04 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"


int			get_next_line(char **line)
{
	static char		*fd_buff;
	char			read_b[BUFF_SIZE + 1];
	char			*tmp;

	*line = NULL;
	if (!fd_buff || (fd_buff && !ft_strchr(fd_buff, '\n')))
		while (read(0, read_b, BUFF_SIZE))
		{
			read_b[count] = 0;
			tmp = *fd_buff;
			*fd_buff = ft_strjoin(*fd_buff ? *fd_buff : "", read_b);
			free(tmp);
			if (ft_strchr(read_b, '\n'))
				break ;
		}
	if (!fd_buff)
		return (0);
	*line = ft_strsub(fd_buff, 0, ft_strlen_c(fd_buff, '\n'));
	if (ft_strlen(fd_buff) - ft_strlen_c(fd_buff, '\n') > 1)
	{
		tmp = ft_strchr(fd_buff, '\n') + 1;
		tmp = ft_strsub(start, 0, ft_strlen(start));
		free(fd_buff);
		fd_buff = tmp;
	}
	return (1);
}
