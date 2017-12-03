/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:43:43 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/03 13:54:03 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

static int		save_value(t_tree **head, char *keyword, char *value)
{
	while (*keyword)
	{
		if (!*head)
		{
			if (!(*head = (t_tree*)ft_memalloc(sizeof(t_tree))))
				return (1);
			(*head)->letter = *keyword;
			if (!*(keyword + 1))
				break ;
		}
		else if ((*head)->letter == *keyword)
		{
			if (*(keyword + 1))
				head = &(*head)->down;
			keyword++;
		}
		else
			head = &(*head)->right;
	}
	(*head)->value = value;
	return (0);
}

t_tree			*fill_tree(void)
{
	t_tree	*head;
	int		gnl_res;
	char	*keyword;
	char	*value;

	head = NULL;
	while ((gnl_res = get_next_line(0, &keyword)))
	{
		if (gnl_res == -1)
			return (NULL);
		if (!*keyword)
		{
			free(keyword);
			break;
		}
		gnl_res = get_next_line(0, &value);
		if (gnl_res == -1 || !gnl_res)
			return (NULL);
		save_value(&head, keyword, value);
		free(keyword);
	}
	return (head);
}
