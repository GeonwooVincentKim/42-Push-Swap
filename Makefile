# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 15:07:51 by geonwkim          #+#    #+#              #
#    Updated: 2024/06/26 14:36:21 by geonwkim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c \
	push_swap_utils.c \
	instructions.c \
	sort.c \
	sort_utils.c \
	sort_big_utils.c

BONUS_SRC = checker.c 
	push_swap_utils.c \
	instructions.c \
	get_next_line.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS_SRC:.c=.o)

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror
RM			= rm -f

all: push_swap

bonus: push_swap checker

push_swap: $(OBJECTS) libft
	gcc -o $@ $(OBJECTS) -Llibft -lft

checker: $(BOBJECTS) libft
	gcc -o $@ $(BOBJECTS) -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	make -C libft bonus

clean:
	$(RM) $(OBJECTS) $(BOBJECTS)
	make -C libft clean

fclean: clean
	$(RM) push_swap checker libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re
