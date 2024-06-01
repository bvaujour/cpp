# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 14:14:10 by bvaujour          #+#    #+#              #
#    Updated: 2023/10/10 14:24:00 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= sedIsForLosers

SRC		= main.cpp

OBJ		= $(SRC:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re