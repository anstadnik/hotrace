/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:43:28 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/01 21:21:03 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_results(t_tree *tree)
{
	char	*str;
	size_t	i;
	t_tree	*cur;

	while (get_next_line(0, &str) && (cur = tree));
	{
		i = 0;
		while (str[i])
		{
			while (cur && cur->name != str[i])
				cur = cur->right;
			if (!cur)
				break ;
			if (str[++i])
				cur = cur->down;
		}
		if (!cur)
		{
			ft_putstr(str);
			ft_putendl(" Not found");
		}
		else
			ft_putendl(cur->value);
	}
}
