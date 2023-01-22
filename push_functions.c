/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:11:18 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/09 12:49:39 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (ft_lstsize(tmp) >= 1)
	{
		ft_lstadd_front(stack_b, ft_lstnew((*stack_a)->content));
		*stack_a = (*stack_a)->next;
		free(tmp);
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	pb(stack_b, stack_a);
}
