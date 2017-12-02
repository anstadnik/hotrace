/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:46:50 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:16:42 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	fill_table(t_list	*table[TABLE_SIZE])
{
	t_list	**cur;
	char	*str;
	char	ret;

	while ((ret = get_next_line(0, &str)) == 1)
	{
		if (!*str)
			return (1);
		cur = &table[hash(str)];
		while (*cur)
			cur = &(*cur)->next;
		if (!cur = malloc(sizeof(t_list)))
			return (-1);
		cur->next = NULL;
		cur->key = str;
		if ((ret = get_next_line(0, &str)) != 1)
			break ;
		cur->value = str;
	}
	return (ret);

}
