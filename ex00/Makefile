# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 17:42:55 by euyi              #+#    #+#              #
#    Updated: 2022/10/13 16:51:08 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed

SRC		=	main.cpp	Fixed.cpp

OBJ		=	$(subst .cpp,.o,$(SRC))

LANG	=	c++

FLAG	=	-Wall -Werror -Wextra	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
			$(LANG)	$(FLAG) $(OBJ)	-o $(NAME)

clean:		
				/bin/rm -f $(OBJ)
				
fclean:			clean
				/bin/rm -f $(NAME)

re:				fclean	all

.PHONY:			all	clean	fclean	re
