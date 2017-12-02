/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:18:22 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 15:28:54 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_tree t_tree;

typedef structs_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}		t_list;

}
struct	s_tree
{
	char	letter;
	char	*value;
	t_tree	*right;
	t_tree	*down;
};

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
