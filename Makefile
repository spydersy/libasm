# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/09 14:39:11 by abelarif          #+#    #+#              #
#    Updated: 2021/06/16 14:52:45 by abelarif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

OBJS =	ft_read.o\
		ft_strcmp.o\
		ft_strcpy.o\
		ft_strdup.o\
		ft_strlen.o\
		ft_write.o

$(NAME):
	nasm -f macho64 ft_read.s -o ft_read.o
	nasm -f macho64 ft_strcmp.s -o ft_strcmp.o
	nasm -f macho64 ft_strcpy.s -o ft_strcpy.o
	nasm -f macho64 ft_strdup.s -o ft_strdup.o
	nasm -f macho64 ft_strlen.s -o ft_strlen.o
	nasm -f macho64 ft_write.s -o ft_write.o
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
