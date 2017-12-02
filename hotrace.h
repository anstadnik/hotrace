/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:18:22 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:33:00 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H
# define TABLE_SIZE 500000
# include <unistd.h>
# include <stdlib.h>

typedef struct s_table	t_table;

struct	s_table
{
	char	*key;
	char	*value;
	t_table	*next;
};

/*
**	Reads from stdin, fills t_table, returns NULL if Error occured
*/

char	fill_table(t_table *table[TABLE_SIZE]);

/*
**	Reads search queries, and prints value to standart output
*/

void	print_hash(t_table *table[TABLE_SIZE]);

/*
**	Frees every branch of the table
*/

void	clean_table(t_table *table[TABLE_SIZE]);

#endif
