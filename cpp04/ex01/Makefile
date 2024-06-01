# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 12:18:19 by bvaujour          #+#    #+#              #
#    Updated: 2023/10/16 13:04:28 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= polymorphisme

SRC			= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

INCLUDES	= Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJ			= $(SRC:.cpp=.o)

DEP			= $(OBJ:.o=.d)

CC			= c++

FLAGS		= -Wall -Werror -Wextra -std=c++98 -MMD -g3



all: $(NAME)
	
%.o:%.cpp Makefile
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