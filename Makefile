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

NAME = push
SRC =	push_swap.c push_swap_utils.c push_swap_utils2.c swap_functions.c push_functions.c rev_functions.c ft_lists.c ft_lists2.c push_swap_utils3.c ft_split.c
PRINTF = ft_printf_dir
CC = cc
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : printf push_swap

printf :
	@echo "\033[0;36mMaking ft_printf...\033[m"
	@cd $(PRINTF) && make && mv libftprintf.a ..

push_swap : $(SRC) push_swap.h
	@echo "Making exec 'push_swap'..."
	@cc $(FLAGS) $(SRC) libftprintf.a -o push_swap

clean :
	@echo "\033[0;31mCleaning...\033[m"
	@cd $(PRINTF) && make clean

fclean : clean
	@echo "\033[0;31mCleaning execs...\033[m"
	@rm -f push_swap libftprintf.a

re : fclean all
