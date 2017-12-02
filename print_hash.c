/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:01:19 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 15:25:44 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_results(t_list *table[TABLE_SIZE])
{
	char	*str;
	t_list	*list;

	while (get_next_line(0, &str))
	{
		list = table[hash(str)];
		while (list && ft_strcmp(list->key, str) != 0)
			list = list->next;
		if (list)
			ft_putendl(list->value);
		else
		{
			ft_putstr(str);
			ft_putendl(" Not found.");
		}
	}
}
