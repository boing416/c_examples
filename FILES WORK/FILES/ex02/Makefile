# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 13:05:16 by mnurkass          #+#    #+#              #
#    Updated: 2019/04/10 18:03:50 by mnurkass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
FLAG = -Wall -Wextra -Werror
SRCS = main.c distr.c lib/*.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
