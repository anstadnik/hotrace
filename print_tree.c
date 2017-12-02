/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:43:28 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:43:00 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

void	print_results(t_tree *tree)
{
	char	*str;
	size_t	i;
	t_tree	*cur;

	while (get_next_line(0, &str) && (cur = tree))
	{
		i = 0;
		while (str[i])
		{
			while (cur && cur->value != str[i])
				cur = cur->right;
			if (!cur || !str[++i])
				break ;
			cur = cur->down;
		}
		if (!cur)
		{
			ft_putstr(str, 1);
			ft_putendl(" Not found", 1);
		}
		else
			ft_putendl(cur->value);
	}
}
