/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:26:03 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/03 15:05:50 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

void	clean_tree(t_tree *tree)
{
	int i;

	i = 0;
	if (!tree)
		return ;
	while (i < 128)
		clean_tree(tree->symbols[i++]);
	free(tree->value);
	free(tree->symbols);
	free(tree);
}










