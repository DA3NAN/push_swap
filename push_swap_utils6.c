/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils6.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:45:27 by adnane            #+#    #+#             */
/*   Updated: 2023/02/02 15:19:23 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position(t_list *stack, int index)
{
	t_list	*tmp;
	int		position;

	tmp = stack;
	position = 0;
	while (tmp)
	{
		if (tmp->index == index)
			return (position);
		position++;
		tmp = tmp->next;
	}
	return (0);
}

int	min_index(t_list *stack)
{
	t_list	*tmp;
	int		min;

	tmp = stack;
	min = tmp->index;
	while (tmp)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}

void	rotate_min(t_list **stack_a)
{
	int	min_pos;
	int	middle;
	int	min;

	min = min_index(*stack_a);
	min_pos = get_position(*stack_a, min);
	middle = ft_lstsize(*stack_a) / 2;
	if (min_pos <= middle)
	{
		while ((*stack_a)->index != min)
		{
			ra(stack_a);
		}
	}
	else
	{
		while ((*stack_a)->index != min)
		{
			rra(stack_a);
		}
	}
}

int	easy_cases(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
	{
		if (!is_sorted(*stack_a))
			sa(stack_a);
		return (1);
	}
	else if (size == 3)
	{
		if (!is_sorted(*stack_a))
		{
			sort_three(stack_a);
		}
		return (1);
	}
	else if (size == 4)
	{
		sort_four(stack_a, stack_b);
		return (1);
	}
	else if (size == 5)
		sort_five(stack_a, stack_b);
	return (0);
}
