/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_r_rr_p_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:50:38 by aait-mal          #+#    #+#             */
/*   Updated: 2023/02/02 11:50:54 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap_bonus.h"

void	s(t_list **stack)
{
	t_list	*tmp;

	if (ft_lstsize(*stack) >= 2)
	{
		tmp = *stack;
		*stack = tmp->next;
		tmp->next = tmp->next->next;
		(*stack)->next = tmp;
	}
}

void	r(t_list **stack)
{
	t_list	*node;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	node = *stack;
	*stack = (*stack)->next;
	node->next = NULL;
	ft_lstadd_back(stack, node);
}

static t_list	*b_last(t_list *stack)
{
	t_list	*node;

	node = stack;
	while (node->next->next)
		node = node->next;
	return (node);
}

void	rr1(t_list **stack)
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
