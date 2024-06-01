# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 09:42:01 by bvaujour          #+#    #+#              #
#    Updated: 2023/09/27 10:40:32 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= accounts

FILES	= tests.cpp Account.cpp

FLAGS	= -std=c++98 -Wall -Werror -Wextra -MMD

OBJ		= $(FILES:.cpp=.o)

DEP		= $(OBJ:.o=.d)

CC		= c++

all: $(NAME)

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "compilate"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ) $(DEP)

fclean:clean
	@rm -f $(NAME)

re: fclean all

-include $(DEP)

.PHONY:	all clean fclean re