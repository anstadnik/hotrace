/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:43:28 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/03 14:21:09 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

void	print_tree(t_tree *tree)
{
	t_tree	*cur;
	char	*str;
	size_t	i;

	while (get_next_line(0, &str) && (cur = tree))
	{
		i = 0;
		while (str[i] && cur)
			cur = cur->symbols[(int)str[i++]];
		if (!cur || !cur->value)
		{
			ft_putstr_fd(str, 1);
			ft_putendl_fd(" Not found.", 1);
		}
		else
			ft_putendl_fd(cur->value, 1);
		free(str);
	}
}










