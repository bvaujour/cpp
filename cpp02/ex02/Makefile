# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 16:48:33 by bvaujour          #+#    #+#              #
#    Updated: 2023/09/28 23:23:04 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed

SRC		= Fixed.cpp main.cpp

OBJ		= $(SRC:.cpp=.o)

DEP		= $(OBJ:.o=.d)

FLAGS	= -std=c++98 -Wall -Wextra -Werror -MMD

CC		= c++

all: $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@
	 
$(NAME): $(OBJ) Makefile
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re