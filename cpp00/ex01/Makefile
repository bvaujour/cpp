# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 10:53:21 by bvaujour          #+#    #+#              #
#    Updated: 2023/10/03 13:07:00 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = Contact.hpp PhoneBook.hpp

SRC = Contact.cpp PhoneBook.cpp main.cpp

NAME = phonebook

OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -MMD

CC = c++

DEP	=	$(OBJ:.o=.d)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all		: $(NAME)

$(NAME)	:  $(OBJ) Makefile
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)
	rm -rf $(DEP)
fclean	: clean
	rm -rf $(NAME)

re	: fclean all

-include $(DEP)

.PHONY: all clean fclean re
