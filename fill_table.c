/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:46:50 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:51:41 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

char	fill_table(t_table	*table[TABLE_SIZE])
{
	t_table	**cur;
	char	*str;
	char	ret;

	while ((ret = (char)get_next_line(0, &str)) == 1)
	{
		if (!*str)
			return (1);
		cur = &table[hash(str)];
		while (*cur)
			cur = &(*cur)->next;
		if (!(cur = malloc(sizeof(t_table))))
			return (-1);
		(*cur)->next = NULL;
		(*cur)->key = str;
		if ((ret = (char)get_next_line(0, &str)) != 1)
			break ;
		(*cur)->value = str;
	}
	return (ret);

}
