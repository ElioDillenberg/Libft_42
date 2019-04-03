# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edillenb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 11:28:49 by edillenb          #+#    #+#              #
#    Updated: 2019/04/03 15:29:19 by edillenb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_strlen.c \
		  ft_strdup.c \
		  ft_strcpy.c \
		  ft_strcmp.c \
		  ft_strncmp.c \
		  ft_atoi.c

OBJECTS = ft_strlen.o \
		  ft_strdup.o \
		  ft_strcpy.o \
		  ft_strcmp.o \
		  ft_strncmp.o \
		  ft_atoi.o

HEADER = libft.h

all:
	@gcc -Wall -Werror -Wextra -c $(SOURCES) -I $(HEADER)
	@ar rc $(NAME) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re : fclean all
