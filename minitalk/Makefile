# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 17:52:24 by akay              #+#    #+#              #
#    Updated: 2024/03/25 18:33:04 by akay             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serverclient.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
printf = ft_printf/libftprintf.a

CLIENT = client
SERVER = server

all: $(SERVER) $(CLIENT)

$(NAME): $(SERVER) $(CLIENT)

$(SERVER):
	make -C ./ft_printf
	$(CC) $(CFLAGS) server.c $(printf) -o $@

$(CLIENT):
	$(CC) $(CFLAGS) client.c $(printf) -o $@

clean:
	make clean -C ./ft_printf

fclean: clean
	make fclean -C ./ft_printf
	rm -rf server client

re: fclean all

.PHONY: all clean fclean re