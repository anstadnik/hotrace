/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:43:43 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/02 15:31:01 by ahrytsen         ###   ########.fr       */
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

static int	save_value(t_tree **head, char *keyword, char *value)
{
	t_tree *prev;
	int		prev_direct;

	prev
	prev = NULL;
	while (*keyword)
	{
		if (!*head)
		{
			if (!(head = &new_node(*keyword)))
				return (1);
		}
		else if ((*head)->letter == *keyword && *(keyword + 1))
			head = &(*head)->down;
		else
			head = &(*head)->right;
		keyword++;
	}
	(*head)->value = value;
}

	fun()
	{
		while (str = get_ne)
		{
			ptr = head;
			while (*ptr && *ptr->letter != *str)
				ptr = &(*ptr)->right;
			if (!*ptr)
				*ptr = malloc(sizeof(t_tree *))

		}
	}
t_tree	*fill_tree()
{
	t_tree	*head;
	int		gnl_res;
	char	*keyword;
	char	*value;

	while(!(gnl_res = get_next_line(0, &keyword)))
	{
		if (gnl_res == -1)
			return (NULL);
		gnl_res = get_next_line(0, &value);
		if (gnl_res == -1 || !gnl_res)
			return (NULL);
	}
	return (head);
}