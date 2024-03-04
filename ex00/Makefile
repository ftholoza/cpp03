# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francesco <francesco@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 14:57:36 by francesco         #+#    #+#              #
#    Updated: 2024/03/02 15:02:19 by francesco        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = ClapTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = ClapTrap.hpp
NAME = ClapTrap

all : $(NAME)

re :fclean $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ) ClapTrap.hpp.gch
fclean: clean
	rm -rf $(NAME)