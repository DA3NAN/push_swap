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
	t_list	*tmp1;

	tmp = *stack_a;
	if (ft_lstsize(tmp) >= 1)
	{
		tmp1 = ft_lstnew((*stack_a)->content);
		tmp1->index = (*stack_a)->index;
		ft_lstadd_front(stack_b, tmp1);
		*stack_a = (*stack_a)->next;
		free(tmp);
	}
	ft_printf("pb\n");
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	pb(stack_b, stack_a);
	ft_printf("pa\n");
}
