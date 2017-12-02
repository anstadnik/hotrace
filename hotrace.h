/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:18:22 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 15:46:37 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H
# include <unistd.h>
# include <stdlib.h>

typedef struct			s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}						t_list;

typedef struct s_tree	t_tree;

struct					s_tree
{
	char	letter;
	char	*value;
	t_tree	*right;
	t_tree	*down;
};

char					*ft_strchr(const char *s, int c);
size_t					ft_strlen(const char *s);
char					*ft_strsub(char const *s, unsigned int start, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
size_t					ft_strlen_c(char const *s, char c);
void					ft_lstadd_end(t_list **alst, t_list *new);
int						get_next_line(const int fd, char **line);
/*
**	Reads from stdin, fills t_tree, returns NULL if Error occured
*/

t_tree					*fill_tree();

/*
**	Reads search queries, and prints value to standart output
*/

void					print_results(t_tree *tree);

/*
**	Frees every branch of the tree
*/

void					clean_tree(t_tree *tree);

#endif
