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
			ft_isspace.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_strlen.c \
			ft_errmsg.c \
			ft_lc.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c

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

