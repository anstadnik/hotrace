/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 14:51:25 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:30:57 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

int	main(void)
{
	t_table	*table[TABLE_SIZE];
	size_t	i;

	i = 0;
	while (i < TABLE_SIZE)
		table[i++] = NULL;
	if (fill_table(table) != 1 || print_hash(table) == -1)
	{
		ft_putendl_fd("Error", 2);
		return (0);
	}
	clean_table(table);
	return (0);
}
