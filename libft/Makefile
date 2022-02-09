# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 17:30:23 by Dykk              #+#    #+#              #
#    Updated: 2022/02/09 18:02:58 by gleb             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

HEADER	=	libft.h

SRC		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

SRC_B	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c

OBJ		=	$(SRC:.c=.o)

OBJ_B	=	$(SRC_B:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror 

RM		=	rm -f

LIB		=	ar rcs

all		:	$(NAME)

$(NAME)	:	$(OBJ)
				$(LIB) $(NAME) $(OBJ)

%.o		:	%.c $(HEADER)
				$(CC) $(CFLAGS) -c -o $@ $<

clean	:
				$(RM) $(OBJ) $(OBJ_B)

fclean	:	clean
				$(RM) $(NAME)

re		:	fclean all

bonus	:	$(OBJ) $(OBJ_B)
				$(LIB) $(NAME) $(OBJ) $(OBJ_B)

.PHONY	:	all, clean, fclean, re
