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
	@echo "\033[0;34mMaking printf...\033[0m"
	@make -C $(PRINTF)

$(NAME) : $(OBJ)
	@cc $(FLAGS) $(OBJ) ./$(PRINTF)/libftprintf.a -o $(NAME)
	@echo "\033[0;34mMaking push_swap executable...\033[0m"

clean :
	@echo "\033[0;31mCleaning Objects...\033[0m"
	@make -C $(PRINTF) clean
	@rm -rf $(OBJ)

fclean : clean
	@echo "\033[0;31mCleaning push_swap...\033[0m"
	@rm -f push_swap libftprintf.a

re : fclean all
