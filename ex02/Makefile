# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/17 14:49:25 by miltavar          #+#    #+#              #
#    Updated: 2026/01/22 14:45:32 by miltavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 02
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -Iincludes

SRCS		= srcs/main.cpp srcs/Bureaucrat.cpp srcs/AForm.cpp srcs/PresidentialPardonForm.cpp srcs/RobotomyRequestForm.cpp srcs/ShrubberyCreationForm.cpp

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp includes/Bureaucrat.hpp includes/AForm.hpp includes/ShrubberyCreationForm.hpp includes/PresidentialPardonForm.hpp includes/RobotomyRequestForm.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
