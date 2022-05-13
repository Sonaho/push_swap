NAME	= push_swap

SRC		= main.c \
			sources/error.c \
			sources/order_array.c

CC 		= gcc

CFLAGS	= -Wall -Werror -Wextra

OBJS	= $(SRC:.c=.o)

RM		= rm -f

BINDIR	= ./bin/

LIBRARY = ./includes/libft/libft.a

all:	libs $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(SRC) $(LIBRARY) -o $(BINDIR)$(NAME)

libs:	
		@$(MAKE) all -C ./includes/libft

clean:
		$(MAKE) clean -C ./includes/libft
		$(RM) $(OBJS)

fclean: clean
		$(MAKE) fclean -C ./includes/libft
		$(RM) $(BINDIR)$(NAME)

re:		fclean re