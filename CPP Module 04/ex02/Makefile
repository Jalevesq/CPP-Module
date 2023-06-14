# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/11 11:18:21 by jalevesq          #+#    #+#              #
#    Updated: 2023/06/13 16:11:06 by jalevesq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex02
CPPFLAGS	= -Wall -Werror -Wextra -g -std=c++98
CC = c++

SRCS	= $(shell find . -iname "*.cpp")
OBJS	= ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	rm -rf $(NAME)

re:	fclean all
	@echo "Re-compilation terminé."