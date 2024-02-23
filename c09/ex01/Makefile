# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 22:51:04 by chunpark          #+#    #+#              #
#    Updated: 2023/12/21 22:16:09 by chunpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
SRCDIR	=	srcs
INCDIR	=	includes

SRCS = 		$(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJS = 		$(SRCS:$(SRCDIR)/%.c=$(SRCDIR)/%.o)
LIBRARY = libft.a
HEADER  =	$(INCDIR)/ft.h

.PHONY: all clean fclean 

all:	$(LIBRARY)

$(LIBRARY):	$(OBJS)
	ar rcs $(LIBRARY) $(OBJS)

$(SRCDIR)/%.o:	$(SRCDIR)/%.c	$(HEADER)
	$(CC)  $(CFLAGS)  -I$(INCDIR) -c $< -o  $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(LIBRARY)

re: fclean all

