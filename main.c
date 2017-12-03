/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 14:54:43 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/03 11:56:13 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

int	main(void)
{
	t_tree	*tree;

	if (!(tree = fill_tree()))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	print_tree(tree);
	clean_tree(tree);
	return (0);
}
