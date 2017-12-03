/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:43:28 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/03 14:01:00 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

void	print_tree(t_tree *tree)
{
	char	*str;
	size_t	i;
	t_tree	*cur;

	while (get_next_line(0, &str) && (cur = tree))
	{
		i = 0;
		while (str[i])
		{
			while (cur && cur->letter != str[i])
				cur = cur->right;
			if (!cur || !str[++i])
				break ;
			cur = cur->down;
		}
		if (!cur || !cur->value)
		{
			write(1, str, ft_strlen(str));
			write(1, " Not found.\n", 12);
		}
		else
		{
			write(1, cur->value, ft_strlen(cur->value));
			write(1, "\n", 1);
		}
		free(str);
	}
}
