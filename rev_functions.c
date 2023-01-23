/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:29:02 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/20 16:38:10 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	r(stack_a);
	r(stack_b);
	ft_printf("rr\n");
}

void	rra(t_list **stack)
{
	rr1(stack);
	ft_printf("rra\n");
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
	ft_printf("rrr\n");
}
