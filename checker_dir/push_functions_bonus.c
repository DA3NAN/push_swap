/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:47:20 by aait-mal          #+#    #+#             */
/*   Updated: 2023/02/02 12:13:13 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap_bonus.h"

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
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *stack_b;
	if (ft_lstsize(tmp) >= 1)
	{
		tmp1 = ft_lstnew((*stack_b)->content);
		tmp1->index = (*stack_b)->index;
		ft_lstadd_front(stack_a, tmp1);
		*stack_b = (*stack_b)->next;
		free(tmp);
	}
}
