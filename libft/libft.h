/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 01:30:59 by mclam             #+#    #+#             */
/*   Updated: 2021/09/19 01:30:59 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <errno.h>
# include <stdint.h>

# define FREE_TO_FIX	(void *)1
# define FREE_ALL	NULL
# define FIX_POINTER	(void *)-1

typedef struct s_list	t_list;
typedef struct s_lc		t_lc;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isspace(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

struct					s_list
{
	void				*content;
	struct s_list		*next;
};

struct s_lc
{
	char				flag;
	void				*ptr;
	struct s_lc			*next;
};

int		ft_errmsg(char *str, int err);
void	*lc(void *ptr);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

#endif
