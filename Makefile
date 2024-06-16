SRCS 		= main.c \
			src/test.c
OBJS		= $(SRCS:.c=.o)
SRCS_BONUS	= bonus.c
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

NAME	= push_swap.a
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra	-Werror
LIBFT	= ./libft/libft.a

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean	all

.PHONY: all clean fclean re