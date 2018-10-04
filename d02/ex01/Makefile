#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 18:42:47 by etugoluk          #+#    #+#              #
#    Updated: 2018/10/04 18:42:48 by etugoluk         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ex01

SRCS = Fixed.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	clang++ $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
