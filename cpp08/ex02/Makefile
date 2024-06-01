# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/28 08:45:45 by bvaujour          #+#    #+#              #
#    Updated: 2024/03/28 09:01:38 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= mutan

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
