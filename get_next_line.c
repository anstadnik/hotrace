/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:08:50 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/03 17:31:31 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

static char		*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	return (NULL);
}

size_t			ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static size_t	ft_strlen_c(char const *s, char c)
{
	size_t res;

	res = 0;
	while (*s && *s != c)
	{
		s++;
		res++;
	}
	return (res);
}

int				get_next_line(char **line)
{
	static char		*fd_buff;
	char			read_b[BUFF_SIZE + 1];
	char			*tmp;
	ssize_t			count;

	*line = NULL;
	if (!fd_buff || (fd_buff && !ft_strchr(fd_buff, '\n')))
		while ((count = read(0, read_b, BUFF_SIZE)))
		{
			read_b[count] = 0;
			tmp = fd_buff;
			fd_buff = ft_strjoin(fd_buff ? fd_buff : "", read_b);
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
		tmp = ft_strsub(tmp, 0, ft_strlen(tmp));
		free(fd_buff);
		fd_buff = tmp;
	}
	return (1);
}
