/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:26:03 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/01 21:26:58 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clean_tree(t_tree *tree)
{
	if (!tree)
		return ;
	clean_tree(tree->right);
	clean_tree(tree->down);
	free(tree->value);
	free(tree);
}