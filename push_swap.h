/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:33:27 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/27 17:55:00 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft_dir/libft.h"
# include "ft_printf_dir/ft_printf.h"

int		check_valid_stack(int ac, char **av, t_list **stack);
int		ft_fill_stack(char *str, t_list **stack);
void	display_stack(t_list *stack);
int		check_duplicate(t_list *stack);
// void	sa(long **stack, int stack_size);
// void	pb(long *stack_a, long **stack_b, int *stack_size);

#endif
