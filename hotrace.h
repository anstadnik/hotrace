/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:18:22 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/01 20:30:42 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_tree
{
	char	*value;
	struct s_tree	**nexts;
}				t_tree;

/*
**	Reads from stdin, fills t_tree, returns NULL if Error occured
*/

t_tree	*fill_tree();

/*
**	Reads search queries, and prints value to standart output
*/

void	print_results(t_tree *tree);

/*
**	Frees every branch of the tree
*/

void	clean_tree(t_tree *tree);
