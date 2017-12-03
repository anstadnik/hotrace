/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:08:50 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/03 16:52:55 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

static int	read_to_newline(char **fd_buff)
{
	char			*read_b;
	char			*tmp;
	ssize_t			count;

	if (!(read_b = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	while ((count = read(0, read_b, BUFF_SIZE)))
	{
		read_b[count] = 0;
		if (count == -1)
			return (1);
		tmp = *fd_buff;
		*fd_buff = ft_strjoin(*fd_buff ? *fd_buff : "", read_b);
		free(tmp);
		if (ft_strchr(read_b, '\n'))
			break ;
	}
	free(read_b);
	return (0);
}

int			get_next_line(char **line)
{
	static char		*fd_buff;
	char			read_b[BUFF_SIZE + 1];
	char			*tmp;

	*line = NULL;
	if (!fd_buff || (fd_buff && !ft_strchr(fd_buff, '\n')))
		while ((count = read(0, read_b, BUFF_SIZE)))
		{
			read_b[count] = 0;
			tmp = *fd_buff;
			*fd_buff = ft_strjoin(*fd_buff ? *fd_buff : "", read_b);
			free(tmp);
			if (ft_strchr(read_b, '\n'))
				break ;
	}
	free(read_b);
	if (!fd_buff)
		return (0);
	if (!(*line = ft_strsub(fd_buff, 0, ft_strlen_c(fd_buff, '\n'))))
lseek(int, off_t, int)		return (-1);
	if (ft_strlen(fd_buff) - ft_strlen_c(fd_buff, '\n') > 1)
	{
		tmp = ft_strchr(fd_buff, '\n') + 1;
		if (!(tmp = ft_strsub(start, 0, ft_strlen(start))))
			return (-1);
		free(fd_buff);
		fd_buff = tmp;
	}
	return (1);
}
