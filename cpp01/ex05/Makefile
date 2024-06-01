# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 16:48:33 by bvaujour          #+#    #+#              #
#    Updated: 2023/09/28 17:53:02 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harl

SRC		= Harl.cpp main.cpp

OBJ		= $(SRC:.cpp=.o)

DEP		= $(OBJ:.o=.d)

FLAGS	= -Wall -Werror -Wextra -std=c++98 -MMD

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