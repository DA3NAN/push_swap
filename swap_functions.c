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
	t_list	*tmp;

	if (ft_lstsize(*stack) >= 2)
	{
		tmp = *stack;
		*stack = tmp->next;
		tmp->next = tmp->next->next;
		(*stack)->next = tmp;
	}
	ft_printf("sa\n");
}

void	sb(t_list **stack)
{
	sa(stack);
	ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}

void	ra(t_list **stack)
{
	t_list	*node;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	node = *stack;
	*stack = (*stack)->next;
	node->next = NULL;
	ft_lstadd_back(stack, node);
	ft_printf("ra\n");
}

void	rb(t_list **stack)
{
	ra(stack);
	ft_printf("rb\n");
}
