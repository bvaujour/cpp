# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 15:18:41 by bvaujour          #+#    #+#              #
#    Updated: 2024/02/09 16:32:14 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Array

FILES		= main.cpp

INCLUDES	= Array.hpp

OBJ			= $(FILES:.cpp=.o)

DEP			= $(OBJ:.o=.d)

FLAGS		= -Wall -Werror -Wextra -g -MMD -std=c++98

all: $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re