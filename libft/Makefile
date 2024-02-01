NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =			ft_isalpha.c			\
				ft_isdigit.c			\
	  			ft_isalnum.c			\
	  			ft_isascii.c			\
	  			ft_isprint.c			\
	  			ft_toupper.c			\
	  			ft_tolower.c			\
	  			ft_strlen.c				\
	  			ft_strchr.c				\
	  			ft_strrchr.c			\
	  			ft_strncmp.c			\
	  			ft_strnstr.c			\
	  			ft_strlcpy.c			\
	  			ft_strlcat.c			\
	  			ft_strdup.c				\
	  			ft_atoi.c				\
	  			ft_memchr.c				\
	  			ft_memcmp.c				\
	  			ft_memset.c				\
	  			ft_bzero.c				\
	  			ft_memcpy.c				\
	  			ft_memmove.c			\
	  			ft_calloc.c				\
	  			ft_substr.c				\
	  			ft_strjoin.c			\
	  			ft_strtrim.c			\
	  			ft_split.c				\
	  			ft_strmapi.c			\
	  			ft_striteri.c			\
	  			ft_itoa.c				\
	  			ft_putchar_fd.c			\
	  			ft_putstr_fd.c			\
	  			ft_putendl_fd.c			\
	  			ft_putnbr_fd.c
SRCS_BONUS =	$(SRCS)					\
				ft_lstnew.c				\
				ft_lstadd_front.c		\
				ft_lstsize.c			\
				ft_lstlast.c			\
				ft_lstadd_back.c		\
				ft_lstdelone.c			\
				ft_lstclear.c			\
				ft_lstiter.c			\
				ft_lstmap.c
SRCS_PRINTF =	$(SRCS_BONUS)			\
				ft_printf.c				\
				ft_printf_utils1.c		\
				ft_printf_utils2.c		\
				ft_printf_utils3.c
SRCS_GNL =		$(SRCS_BONUS)			\
				get_next_line.c			\
				get_next_line_utils.c
SRCS_COMP =		$(SRCS_BONUS)			\
				ft_printf.c				\
				ft_printf_utils1.c		\
				ft_printf_utils2.c		\
				ft_printf_utils3.c		\
				get_next_line.c			\
				get_next_line_utils.c


OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
OBJS_PRINTF = $(SRCS_PRINTF:.c=.o)
OBJS_GNL = $(SRCS_GNL:.c=.o)
OBJS_COMP = $(SRCS_COMP:.c=.o)

all: $(NAME)

bonus: $(OBJS_BONUS)
	@make OBJS="$(OBJS_BONUS)" all
printf: $(OBJS_PRINTF)
	@make OBJS="$(OBJS_PRINTF)" all
gnl: $(OBJS_GNL)
	@make OBJS="$(OBJS_GNL)" all
complete: $(OBJS_COMP)
	@make OBJS="$(OBJS_COMP)" all

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS_COMP)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
