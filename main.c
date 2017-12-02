/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 14:54:43 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 18:00:56 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

int	main(void)
{
	t_tree	*tree;

	if (!(tree = fill_tree()))
	{
		ft_putendl_fd("Error", 2);
		return (0);
	}
	print_tree(tree);
	clean_tree(tree);
	return (0);
}
