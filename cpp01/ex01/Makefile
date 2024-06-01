# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 11:46:18 by bvaujour          #+#    #+#              #
#    Updated: 2023/10/16 09:34:17 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = Zombie.hpp

SRC = main.cpp Zombie.cpp zombieHorde.cpp

NAME = necro

OBJ = $(SRC:.cpp=.o)

DEP = $(OBJ:.o=.d)

FLAGS = -std=c++98 -Wall -Werror -Wextra -MMD

CC = c++

%.o: %.cpp $(INLUDES)
	$(CC) $(FLAGS) -c $< -o $@

all		: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ) $(DEP)

fclean	: clean
	rm -rf $(NAME)

re	: fclean all

-include $(DEP)

.PHONY: all clean fclean re