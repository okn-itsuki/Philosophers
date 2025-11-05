NAME = philosophers

CC = cc
CFLAGS = -Wall -Wextra -Werror -I inc

RM = rm -fr

SRCDIR = src
OBJDIR = obj
SRCFILE = main.c usage_mes.c

SRCS = $(addprefix $(SRCDIR)/, $(SRCFILE))
OBJS = $(addprefix $(OBJDIR)/, $(SRCFILE:.c=.o))

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

all: $(LIBFT_LIB) $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)


$(NAME): $(LIBFT_LIB) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS)  $(LIBFT_LIB) -o $(NAME)

clean:
	$(RM) $(OBJDIR)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re