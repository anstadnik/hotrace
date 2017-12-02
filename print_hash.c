/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:01:19 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:55:55 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

char	print_hash(t_table *table[TABLE_SIZE])
{
	char	*str;
	t_table	*list;
	char	ret;

	while ((ret = (char)get_next_line(0, &str)) == 1)
	{
		list = table[hash(str)];
		while (list && ft_strcmp(list->key, str) != 0)
			list = list->next;
		if (list)
			ft_putendl_fd(list->value, 1);
		else
		{
			ft_putstr_fd(str, 1);
			ft_putendl_fd(" Not found.", 1);
		}
	}
	return (ret);
}
