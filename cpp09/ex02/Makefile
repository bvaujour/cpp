# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 15:52:38 by bvaujour          #+#    #+#              #
#    Updated: 2024/04/30 17:51:46 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PmergeMe

FILE	= main.cpp Timer.cpp

OBJ		= $(FILE:.cpp=.o)

DEP		= $(OBJ:.o=.d)

FLAG	= -Wall -Werror -Wextra -std=c++98 -MMD

CC		= c++

all: $(NAME)

%.o:%.cpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re