# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kiatrou <kiatrou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/10 13:42:05 by kiatrou           #+#    #+#              #
#    Updated: 2025/06/26 18:41:27 by kiatrou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
all: $(NAME)
$(NAME): $(OBJS)
    ar rcs $@ $^
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@
clean:
    rm -f $(OBJS)
fclean: clean
    rm -f $(NAME)
re: fclean all
MAIN = main
MAIN_SRC = main.c
$(MAIN): $(MAIN_SRC) $(NAME)
    @echo "Compiling main test program $@"
    $(CC) $(CFLAGS) $(MAIN_SRC) -L. -lft -o $(MAIN)
run: $(MAIN)
    ./$(MAIN)
.PHONY: all clean fclean re