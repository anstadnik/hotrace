/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:37:23 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/02 16:25:34 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_string;

	i = 0;
	if (!s || !(new_string = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		new_string[i] = s[start + i];
		i++;
	}
	return (new_string);
}
