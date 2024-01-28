NAME = minitalk

client_SRC = client.c
server_SRC = server.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a

all: $(NAME)

$(NAME): client server

client: $(client_SRC) $(LIBFT)
	$(CC) $(CFLAGS) $^ -o $@
server: $(server_SRC) $(LIBFT)
	$(CC) $(CFLAGS) $^ -o $@

$(LIBFT):
	@make -C libft printf

clean:
	@make -C libft clean

fclean: clean
	rm -f client server libft/libft.a

re: fclean all

.PHONY: all clean fclean re minitalk
