/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 14:51:25 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 14:59:24 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

int	main(void)
{
	t_table	table[TABLE_SIZE];

	if (!fill_table(table))
	{
		ft_putendl_fd("Error", 2);
		return (0);
	}
	print_rezults(table);
	clean_table(table);
	return (0);
}
