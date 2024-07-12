# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 17:16:16 by tvalimak          #+#    #+#              #
#    Updated: 2024/07/12 11:13:33 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Phonebook.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Phonebook
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