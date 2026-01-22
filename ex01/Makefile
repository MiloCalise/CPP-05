# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/17 14:49:25 by miltavar          #+#    #+#              #
#    Updated: 2026/01/22 11:24:56 by miltavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 01
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -Iincludes

SRCS		= srcs/main.cpp srcs/Bureaucrat.cpp srcs/Form.cpp

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp includes/Bureaucrat.hpp includes/Form.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
