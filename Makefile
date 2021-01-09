# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/09 14:39:11 by abelarif          #+#    #+#              #
#    Updated: 2021/01/09 14:53:48 by abelarif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

NASM = nasm

FLAG = -f macho64

SRCS =	ft_read.s	\
		ft_strcmp.s	\
		ft_strcpy.s	\
		ft_strdup.s	\
		ft_strlen.s	\
		ft_write.s	\

OBJS = $(SRCS:.s=.o)

all: $(NAME)

$(NAME):
		$(NASM) $(FLAG) $(SRCS)
		ar rc $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all