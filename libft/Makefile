# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/19 01:18:20 by mclam             #+#    #+#              #
#    Updated: 2021/09/19 01:18:20 by mclam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRCS =		ft_atoi.c \
			ft_bzero.c \
			ft_errmsg.c \
			ft_is_functions.c \
			ft_is_functions1.c \
			ft_lc.c \
			ft_lst_functions.c \
			ft_lst_functions1.c \
			ft_memcpy.c \
			ft_put_functions.c \
			ft_splitset_lc.c \
			ft_strdup_lc.c \
			ft_strlen.c \

OBJS =		$(SRCS:.c=.o)

HEADER =	libft.h

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

.c.o:		%.c $(HEADER)
			$(CC) $(CFLAGS) $(TEST) -c $< -o $(<:.c=.o)

all:		$(NAME)
			@echo "Make done"

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS) $(HEADER)
			ranlib $(NAME)

clean:
			@rm -f $(OBJS) $(HEADER).gch
			@echo "Make clean done"

fclean:		clean
			@rm -f $(NAME)
			@echo "Make fclean done"

re:			fclean all

norm:
			norminette *.c *.h

.PHONY:		all clean fclean re norm

