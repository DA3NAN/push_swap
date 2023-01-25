# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 20:33:32 by aait-mal          #+#    #+#              #
#    Updated: 2022/12/30 12:29:25 by aait-mal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC =	$(wildcard *.c)
OBJ = $(SRC:.c=.o)
PRINTF = ft_printf_dir
CC = cc
FLAGS = -Wall -Wextra -Werror

all : printf $(NAME)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $<

printf :
	@echo "Making printf..."
	@make -C $(PRINTF)

$(NAME) : $(OBJ)
	@cc $(FLAGS) $(OBJ) ./$(PRINTF)/libftprintf.a -o $(NAME)
	@echo "Making push_swap executable..."

clean :
	@echo "Cleaning Objects..."
	@make -C $(PRINTF) fclean
	@rm -rf $(OBJ)

fclean : clean
	@echo "Cleaning push_swap..."
	@rm -f push_swap libftprintf.a

re : fclean all
