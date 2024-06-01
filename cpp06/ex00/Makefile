# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 11:14:04 by bvaujour          #+#    #+#              #
#    Updated: 2024/01/31 13:29:23 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Scalar

SRC			= main.cpp ScalarConvertion.cpp

INCLUDES	= ScalarConvertion.hpp

OBJ			= $(SRC:.cpp=.o)

DEP			= $(OBJ:.o=.d)

CC			= c++

FLAGS		= -Wall -Werror -Wextra -std=c++98 -MMD -g3



all: $(NAME)
	
%.o: %.cpp Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
clean:
	rm -rf $(OBJ) $(DEP)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re