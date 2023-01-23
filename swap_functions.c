/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:10:58 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/20 16:38:13 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack)
{
	s(stack);
	ft_printf("sa\n");
}

void	sb(t_list **stack)
{
	s(stack);
	ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	s(stack_a);
	s(stack_b);
	ft_printf("ss\n");
}

void	ra(t_list **stack)
{
	r(stack);
	ft_printf("ra\n");
}

void	rb(t_list **stack)
{
	r(stack);
	ft_printf("rb\n");
}
