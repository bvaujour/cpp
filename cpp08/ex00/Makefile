# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 10:31:42 by bvaujour          #+#    #+#              #
#    Updated: 2024/05/06 13:33:07 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= easyfind

FILE		= main.cpp

OBJ			= $(FILE:.cpp=.o)

DEP			= $(OBJ:.o=.d)

FLAG		= -Wall -Werror -Wextra -g -MMD -std=c++98

all: $(NAME)

%.o: %.cpp
	c++ $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
