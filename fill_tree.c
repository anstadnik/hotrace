/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:43:43 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/12/01 21:27:50 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	add_node(t_tree **head, char *keyword, char *value)
{

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
		if (!(gnl_res = get_next_line(0, &value)))
			break ;
		if (gnl_res == -1)
			return (NULL);

	}
	return (head);
}
