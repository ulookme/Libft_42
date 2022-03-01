# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 15:47:50 by chajjar           #+#    #+#              #
#    Updated: 2022/03/01 10:13:47 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_atoi.c\
   	   ft_isdigit.c\
   	   ft_memmove.c\
	   ft_split.c\
   	   ft_strlcpy.c\
   	   ft_strtrim.c\
       ft_bzero.c\
	   ft_isprint.c\
	   ft_memset.c\
	   ft_strchr.c\
	   ft_strlen.c\
	   ft_substr.c\
	   ft_calloc.c\
	   ft_itoa.c\
	   ft_putchar_fd.c\
	   ft_strdup.c\
	   ft_strmapi.c\
	   ft_tolower.c\
	   ft_isalnum.c\
	   ft_lstnew.c\
	   ft_memchr.c\
	   ft_putendl_fd.c\
	   ft_striteri.c\
	   ft_strncmp.c\
	   ft_toupper.c\
	   ft_isalpha.c\
	   ft_memcmp.c\
	   ft_putnbr_fd.c\
	   ft_strjoin.c\
	   ft_strnstr.c\
	   ft_isascii.c\
	   ft_memcpy.c\
	   ft_putstr_fd.c\
	   ft_strlcat.c\
	   ft_strrchr.c\

OBJECT = $(SRCS:.c=.o)

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}


$(NAME): $(OBJECT) $(HEADERS)
	@ar rc $(NAME)  $(OBJECT)
	@ranlib $(NAME)


clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: re clean fclean

