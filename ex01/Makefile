# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 17:16:16 by tvalimak          #+#    #+#              #
#    Updated: 2024/07/23 20:45:06 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Phonebook.cpp Contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re