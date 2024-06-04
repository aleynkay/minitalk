# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 18:44:32 by akay              #+#    #+#              #
#    Updated: 2023/11/28 18:48:50 by akay             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 			= ft_printf.c ft_hexadecimal.c ft_printcharacter.c ft_printnbr.c ft_printptr.c ft_printstr.c ft_printunsigned_nbr.c 

OBJS 			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re