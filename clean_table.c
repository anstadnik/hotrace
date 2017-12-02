/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:32:22 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:29:47 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

void	clean_table(t_table *table[TABLE_SIZE])
{
	size_t	i;
	t_table	*tmp;

	i = 0;
	while (i < TABLE_SIZE)
	{
		while (tmp = table[TABLE_SIZE])
		{
			table[TABLE_SIZE] = table[TABLE_SIZE]->next;
			free(temp);
		}
		i++;
	}
}
