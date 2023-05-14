# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 22:13:57 by jalevesq          #+#    #+#              #
#    Updated: 2023/05/13 22:14:07 by jalevesq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Harl_Be_Like_A_Karen
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
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