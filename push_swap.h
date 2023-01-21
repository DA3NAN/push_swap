/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:33:27 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/20 18:44:58 by aait-mal         ###   ########.fr       */
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
void	push_swap(t_list **stack_a, t_list **stack_b);
int		ft_fill_stack(char *str, t_list **stack);
void	del(int x);
void	display_stack(t_list *stack_a, t_list *stack_b);
int		check_duplicate(t_list **stack);
void	sa(t_list **stack);
void	sb(t_list **stack);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);

#endif
