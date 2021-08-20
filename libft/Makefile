# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/16 12:12:45 by lnoirot           #+#    #+#              #
#    Updated: 2021/08/20 17:25:06 by lnoirot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES :

NAME	= libft.a

GNL_PATH =	./gnl
IS_PATH =	./is_something
STR_PATH =	./str
AFF_PAH =	./put
MEM_PATH =	./mem
MATHS_PATH =	./maths
LIST_PATH =		./list
TABLE_STR_PATH =	./table_str

SRCS	=	$(GNL_PATH)/get_next_line.c \
		$(GNL_PATH)/get_next_line_utils.c \
		$(MEM_PATH)/ft_bzero.c \
		$(MEM_PATH)/ft_memset.c \
		$(MEM_PATH)/ft_memcpy.c \
		$(MEM_PATH)/ft_memccpy.c \
		$(MEM_PATH)/ft_memmove.c \
		$(MEM_PATH)/ft_memchr.c \
		$(MEM_PATH)/ft_memcmp.c \
		$(STR_PATH)/ft_strlen.c \
		$(IS_PATH)/ft_isalpha.c \
		$(IS_PATH)/ft_isdigit.c \
		$(IS_PATH)/ft_isalnum.c \
		$(IS_PATH)/ft_isascii.c \
		$(IS_PATH)/ft_isprint.c \
		$(IS_PATH)/ft_toupper.c \
		$(IS_PATH)/ft_tolower.c \
		$(IS_PATH)/is_white_space.c \
		$(STR_PATH)/ft_strchr.c \
		$(STR_PATH)/ft_strrchr.c \
		$(STR_PATH)/ft_strncmp.c \
		$(STR_PATH)/ft_strlcpy.c \
		$(STR_PATH)/ft_strlcat.c \
		$(STR_PATH)/ft_strnstr.c \
		$(MATHS_PATH)/ft_atoi.c \
		$(MEM_PATH)/ft_calloc.c \
		$(STR_PATH)/ft_strdup.c \
		$(STR_PATH)/ft_substr.c \
		$(STR_PATH)/ft_strjoin.c \
		$(STR_PATH)/ft_strtrim.c \
		$(STR_PATH)/ft_split.c \
		$(MATHS_PATH)/ft_itoa.c \
		$(STR_PATH)/ft_strmapi.c \
		$(AFF_PAH)/ft_putchar_fd.c \
		$(AFF_PAH)/ft_putstr_fd.c \
		$(AFF_PAH)/ft_putendl_fd.c \
		$(AFF_PAH)/ft_putnbr_fd.c \
		$(STR_PATH)/ft_strcmp.c \
		$(LIST_PATH)/ft_lstnew.c \
		$(LIST_PATH)/ft_lstadd_front.c \
		$(LIST_PATH)/ft_lstlast.c \
		$(LIST_PATH)/ft_lstsize.c \
		$(LIST_PATH)/ft_lstadd_back.c \
		$(LIST_PATH)/ft_lstdelone.c \
		$(LIST_PATH)/ft_lstclear.c \
		$(LIST_PATH)/ft_lstiter.c \
		$(LIST_PATH)/lst_size.c \
		$(STR_PATH)/split_str.c \
		$(TABLE_STR_PATH)/table_size.c \
		$(TABLE_STR_PATH)/insert_str.c \
		$(TABLE_STR_PATH)/free_str_table.c \
		$(TABLE_STR_PATH)/print_str_table.c

OBJS	= $(SRCS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g3  -Iincludes


%.o:	%.c		
	$(CC) $(CFLAGS) -c $< -o $@

all :		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)


clean :
			rm -f $(OBJS)

fclean :	clean
			rm -f $(NAME)

re : fclean all


.PHONY:		all clean fclean re
