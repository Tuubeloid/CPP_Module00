# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 18:44:00 by tvalimak          #+#    #+#              #
#    Updated: 2024/07/10 19:01:20 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
NAME = megaphone
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
