NAME = client server

SRC_CLIENT = client.c
SRC_SERVER = server.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT)
	cc $(CFLAGS) $(SRC_CLIENT) $< -o client
	cc $(CFLAGS) $(SRC_SERVER) $< -o server

$(LIBFT):
	@make -C libft printf

clean:
	@make -C libft clean

fclean: clean
	rm -f $(NAME) libft/libft.a

re: fclean all

.PHONY: all clean fclean re
