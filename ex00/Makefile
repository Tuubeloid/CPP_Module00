# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 18:44:00 by tvalimak          #+#    #+#              #
#    Updated: 2024/10/01 12:17:08 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
DEBUG_FLAGS = -g -O0
RM = rm -f

# Default target
all: $(NAME)

# Build the normal executable
$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

# Compile object files
%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

# Build with debug symbols for Valgrind
debug: $(OBJ)
	$(CC) $(FLAGS) $(DEBUG_FLAGS) -o $(NAME) $(OBJ)

# Clean object files
clean:
	$(RM) $(OBJ)

# Clean object files and the executable
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re debug
