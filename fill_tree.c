/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:43:43 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/02 16:12:09 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static t_tree	new_node(char k)
{
	t_tree new_node;

	if (!(new_node = (t_tree*)malloc(sizeof(t_tree))))
		return (NULL);
	new_node->letter = k;
	new_node->value = NULL;
	new_node->right = NULL;
	new_node->down = NULL;
	return (new_node);
}

static int		save_value(t_tree **head, char *keyword, char *value)
{
	t_tree *prev;
	int		prev_direct;

	prev
	prev = NULL;
	if (!*head)
		if (!(*head = new_node(*keyword++)))
				return (1);
	while (*keyword)
	{
		if (!*head)
		{
			if (!(head = &new_node(*keyword)))
				return (1);
		}
		else if ((*head)->letter == *keyword && *(keyword + 1))
			head = &(*head)->down;
		else if (*(keyword + 1))
			head = &(*head)->right;
		keyword++;
	}
	(*head)->value = value;
}

t_tree			*fill_tree()
{
	t_tree	*head;
	int		gnl_res;
	char	*keyword;
	char	*value;

	head = NULL;
	while(!(gnl_res = get_next_line(0, &keyword)) && *keyword)
	{
		if (gnl_res == -1)
			return (NULL);
		gnl_res = get_next_line(0, &value);
		if (gnl_res == -1 || !gnl_res)
			return (NULL);
		save_value(&head, keyword, value);
	}
	return (head);
}
