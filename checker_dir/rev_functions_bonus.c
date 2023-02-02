/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_functions_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:49:54 by aait-mal          #+#    #+#             */
/*   Updated: 2023/02/02 12:13:30 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap_bonus.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	r(stack_a);
	r(stack_b);
}

void	rra(t_list **stack)
{
	rr1(stack);
}

void	rrb(t_list **stack)
{
	rr1(stack);
	ft_printf("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rr1(stack_a);
	rr1(stack_b);
}
