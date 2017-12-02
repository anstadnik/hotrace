/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:18:22 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:56:59 by astadnik         ###   ########.fr       */
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

typedef struct			s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}						t_list;

/*
**	Reads from stdin, fills t_table, returns NULL if Error occured
*/

char	fill_table(t_table *table[TABLE_SIZE]);

/*
**	Reads search queries, and prints value to standart output
*/

char	print_hash(t_table *table[TABLE_SIZE]);

/*
**	Frees every branch of the table
*/

void	clean_table(t_table *table[TABLE_SIZE]);


void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
char					*ft_strchr(const char *s, int c);
size_t					ft_strlen(const char *s);
char					*ft_strsub(char const *s, unsigned int start, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
size_t					ft_strlen_c(char const *s, char c);
void					ft_lstadd_end(t_list **alst, t_list *new);
int						get_next_line(const int fd, char **line);
#endif
