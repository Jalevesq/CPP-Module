# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 13:08:55 by jalevesq          #+#    #+#              #
#    Updated: 2023/07/18 15:21:27 by jalevesq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= RPN
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address
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

re:	clean all
	@echo "Re-compilation terminé."