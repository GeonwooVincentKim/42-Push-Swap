# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 15:07:51 by geonwkim          #+#    #+#              #
#    Updated: 2024/06/25 20:22:59 by geonwkim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ./push_swap_c/main.c \
			./push_swap_c/chunk_sort.c \
			./push_swap_c/push_swap.c \
			./push_swap_c/reverse_rotate.c \
			./push_swap_c/rotate.c \
			./push_swap_c/sort_multi_2.c \
			./push_swap_c/sort_multi_utils.c \
			./push_swap_c/sort_multi.c \
			./push_swap_c/sort_per_num.c \
			./push_swap_c/utils.c \
			./push_swap_c/utils2.c
SRCS_BONUS 	= ./check/main.c \
			./check/utils.c \
			./check/utils2.c \
			./check/utils3.c \
			./check/gnl/get_next_line.c \
			./check/gnl/get_next_line_utils.c \
			./check/push_n_swap.c \
			./check/rotate.c

OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

NAME		= push_swap
NAME_BONUS	= checker
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra	-Werror
INC_FIL = -Iinclude

%.o:%.c
	$(CC) $(CFLAGS) $(INC_FIL) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

bonus: $(NAME_BONUS)
	ar rcs $(NAME_BONUS) $(OBJS_BONUS)

re: fclean	all

.PHONY: all clean fclean re