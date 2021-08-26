# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/20 16:40:29 by lnoirot           #+#    #+#              #
#    Updated: 2021/08/26 15:12:27 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES	:

NAME	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -MMD -g3
RM		=	rm -rf

LIBFT_LIB	=	-L$(LIBFT_PATH) -lft
INC_PATH	=	./inc
LIBFT_PATH	=	./libft
INCLUDES	=	-I$(INC_PATH) -I$(LIBFT_PATH)
LIBFT_MAKE	=	@$(MAKE) -C $(LIBFT_PATH)

OBJ_PATH	=	obj/

SRCS_PATH 		=	srcs/
PARSING_PATH	=	parsing/
MVT_PATH		=	mouvements/
DEBUG_PATH		=	debug/

PARSING_LST		=	$(addprefix $(PARSING_PATH), \
									parsing.c \
									create_stack.c \
					)

MVT_LST			=	$(addprefix $(MVT_PATH), \
									swap.c \
									push.c \
									rotate.c \
									reverse_rotate.c \
									utils.c \
					)

DEBUG_LST			=	$(addprefix $(DEBUG_PATH), \
									print_stack.c \
					)

SRCS			=	$(addprefix $(SRCS_PATH), \
									main.c \
									$(PARSING_LST) \
									$(MVT_LST) \
									$(DEBUG_LST) \
					)
SRCS_LIST		= main.c \
					$(PARSING_LST) \
					$(MVT_LST) \
					$(DEBUG_LST)

OBJS	=	$(addprefix $(OBJ_PATH), $(SRCS_LIST:.c=.o))

$(OBJ_PATH)%.o:		$(SRCS_PATH)/%.c
					$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

DEPS	=	$(OBJS:.o=.d)

all:	libft
			@mkdir -p obj obj/parsing obj/mouvements obj/debug
			$(MAKE) ${NAME}

libft:	
		$(LIBFT_MAKE)
		@echo "Libft compiled"

${NAME}:	$(OBJS)
		$(CC) $(OBJS) $(LIBFT_LIB) -o $(NAME)
		@echo "push_swap is compiled"

clean:	
		$(RM) $(OBJS)
		$(LIBFT_MAKE) clean
		$(RM) $(DEPS)
		@echo "Cleaned .o !"

fclean:		clean
			$(LIBFT_MAKE) fclean
			$(RM) $(NAME)
			$(RM) $(OBJ_PATH)
			$(RM) $(DEPS)
			@echo "All cleaned !"

run:		$(NAME)
			./push_swap

vg:			$(NAME)
			valgrind --track-origins=yes ./push_swap

re:			fclean all

.PHONY : all clean libft run vg

-include $(DEPS)



