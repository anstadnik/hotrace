/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:18:22 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 16:47:21 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 32

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

void					*ft_memset(void *b, int c, size_t len);
void					*ft_memalloc(size_t size);
void					ft_bzero(void *s, size_t n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
char					*ft_strnew(size_t size);
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

void					print_tree(t_tree *tree);

/*
**	Frees every branch of the tree
*/

void					clean_tree(t_tree *tree);

#endif
