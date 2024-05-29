# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 14:57:36 by francesco         #+#    #+#              #
#    Updated: 2024/05/29 20:20:47 by ftholoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
NAME = ClapTrap

all : $(NAME)

re :fclean $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ) ClapTrap.hpp.gch
fclean: clean
	rm -rf $(NAME)