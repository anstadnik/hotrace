/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:11:23 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/03 17:29:53 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

void		ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

void		ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_string;

	i = 0;
	new_string = (char*)malloc(len);
	new_string[len] = 0;
	while (i < len)
	{
		new_string[i] = s[start + i];
		i++;
	}
	return (new_string);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	char	*new_string;

	j = 0;
	new_string = (char*)malloc(ft_strlen(s1) + ft_strlen(s2));
	while (*s1)
		new_string[j++] = *s1++;
	while (*s2)
		new_string[j++] = *s2++;
	new_string[j] = 0;
	return (new_string);
}
