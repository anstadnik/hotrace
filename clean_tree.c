/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:26:03 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:30:50 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

void	clean_tree(t_tree *tree)
{
	if (!tree)
		return ;
	clean_tree(tree->right);
	clean_tree(tree->down);
	free(tree->value);
	free(tree);
}
