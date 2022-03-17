# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 15:00:23 by alefranc          #+#    #+#              #
#    Updated: 2022/03/17 07:25:11 by alefranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#                                                                              #
#                               DECLARATIONS                                   #
#                                                                              #
#------------------------------------------------------------------------------#

#------------------------------------#
#             COMPILATION            #
#------------------------------------#

NAME = push_swap

CC = clang
FLAGS = -Wall -Wextra -Werror -g3
INC_FLAG = -Iinclude

#------------------------------------#
#                LIBFT               #
#------------------------------------#

LIBFTDIR = libft/
LIBFT_A = $(LIBFTDIR)libft.a

LIBFTINC_FLAG = -I$(LIBFTDIR)include

#------------------------------------#
#               SOURCES              #
#------------------------------------#

SRCDIR = src/
SRCFILES =	action_push.c \
			action_reverse_rotate.c \
			action_rotate.c \
			action_swap.c \
			main.c \
			parsing.c \
			error.c \
			utils_lst.c
SRC = $(addprefix $(SRCDIR), $(SRCFILES))

#------------------------------------#
#               OBJECTS              #
#------------------------------------#

OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR), $(SRCFILES:.c=.o))

#------------------------------------#
#              INCLUDES              #
#------------------------------------#

HEADER = include/push_swap.h

#------------------------------------------------------------------------------#
#                                                                              #
#                                   RULES                                      #
#                                                                              #
#------------------------------------------------------------------------------#

all: $(LIBFT_A) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(INC_FLAG) $(LIBFTINC_FLAG) $(OBJ) $(LIBFT_A) -o $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.c $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC) $(FLAGS) $(INC_FLAG) $(LIBFTINC_FLAG) -c $< -o $@

$(LIBFT_A):
	make -C $(LIBFTDIR)

clean:
	rm -rf $(OBJDIR)
	make -C $(LIBFTDIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
