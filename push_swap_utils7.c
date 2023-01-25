/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils7.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adnane <adnane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:34:07 by adnane            #+#    #+#             */
/*   Updated: 2023/01/23 20:52:21 by adnane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_list **stack_a, t_list **stack_b, int chunk)
{
	int		count;

	count = chunk;
	while ((*stack_a))
	{
		if ((*stack_a)->index < count)
		{
			if ((*stack_a)->index < count - (chunk / 2))
				pb(stack_a, stack_b);
			else
			{
				pb(stack_a, stack_b);
				rb(stack_b);
			}
		}
		else
			ra(stack_a);
		if (ft_lstsize(*stack_b) == count)
			count = count + chunk;
	}
}

void	help_push_up(t_list **stack_a, t_list **stack_b, int index)
{
	while (*stack_b && (*stack_b)->index != index)
		rb(stack_b);
	if ((*stack_b)->index == index)
		pa(stack_a, stack_b);
}

void	help_push_down(t_list **stack_a, t_list **stack_b, int index)
{
	while (*stack_b && (*stack_b)->index != index)
		rrb(stack_b);
	if ((*stack_b)->index == index)
		pa(stack_a, stack_b);
}

void	help_push(t_list **stack_a, t_list **stack_b, int index)
{
	if (get_position(*stack_b, index) > ft_lstsize(*stack_b) / 2)
	{
		help_push_down(stack_a, stack_b, index);
	}
	else
	{
		help_push_up(stack_a, stack_b, index);
	}
}

int		is_index_there(t_list *stack, int index)
{
	while (stack)
	{
		if (stack->index == index)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	int		max;
	int		nb_mv_max;
	int		nb_mv_max_prev;

	max = ft_lstsize(*stack_b) - 1;
	while (*stack_b)
	{
		set_nb_moves(*stack_b, max);
		nb_mv_max = get_nb_moves(*stack_b, max);
		if (!is_index_there(*stack_b, max - 1))
		{
			help_push(stack_a, stack_b, max);
			max--;
		}
		else
		{
			set_nb_moves(*stack_b, max-1);
			nb_mv_max_prev = get_nb_moves(*stack_b, max - 1);
			if (nb_mv_max < nb_mv_max_prev)
			{
				help_push(stack_a, stack_b, max);
				max--;
			}
			else
			{
				help_push(stack_a, stack_b, max - 1);
				help_push(stack_a, stack_b, max);
				sa(stack_a);
				max = max - 2;
			}
		}
	}
}
