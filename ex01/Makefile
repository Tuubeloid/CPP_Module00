# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 17:16:16 by tvalimak          #+#    #+#              #
#    Updated: 2024/10/01 12:26:55 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Phonebook.cpp Contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
DEBUG_FLAGS = -g -O0
RM = rm -f

# Default target
all: $(NAME)

# Build the normal executable
$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

# Build with debug flags for Valgrind
debug: $(OBJ)
	$(CC) $(FLAGS) $(DEBUG_FLAGS) -o $(NAME) $(OBJ)

# Compile object files
%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

# Clean object files
clean:
	$(RM) $(OBJ)

# Clean object files and the executable
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re debug