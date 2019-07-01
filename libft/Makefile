# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbolton <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 14:36:30 by rbolton           #+#    #+#              #
#    Updated: 2019/06/11 15:50:45 by rbolton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_putchar.c ft_isupper.c ft_islower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_isspace.c ft_iswhitespace.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strlen.c ft_atoi.c ft_putnbr_endl.c ft_putnbr_endl_fd.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strcmp.c ft_strncmp.c ft_strnstr.c ft_strequ.c ft_strnequ.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strclr.c ft_strsub.c ft_strdel.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_strrev.c ft_strsplit.c ft_itoa.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c
OBJECTS = *.o
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all 
