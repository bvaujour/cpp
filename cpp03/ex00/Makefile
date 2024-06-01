# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 14:02:20 by bvaujour          #+#    #+#              #
#    Updated: 2023/10/05 10:13:25 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= clap

FILES		= main.cpp ClapTrap.cpp

OBJ			= $(FILES:.cpp=.o)

DEP		= $(OBJ:.o=.d)

INCLUDES	= ClapTrap.hpp

CC			= c++

FLAGS		= -std=c++98 -Wall -Werror -Wextra -MMD

all: $(NAME)

%.o:%.cpp $(INCLUDES)
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