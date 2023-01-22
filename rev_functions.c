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
	ra(stack_a);
	rb(stack_b);
}

static t_list	*b_last(t_list *stack)
{
	t_list	*node;

	node = stack;
	while (node->next->next)
		node = node->next;
	return (node);
}

void	rra(t_list **stack)
{
	t_list	*node;
	t_list	*last;
	t_list	*tmp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	last = ft_lstlast(*stack);
	node = b_last(*stack);
	node->next = NULL;
	tmp = *stack;
	last->next = tmp;
	*stack = last;
}

void	rrb(t_list **stack)
{
	rra(stack);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
