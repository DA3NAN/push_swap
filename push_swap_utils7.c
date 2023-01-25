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

static int	count(t_list *stack, int position, int middle)
{
	int		count;

	count = 0;
	if (position <= middle)
		count = count_befor_middle(stack, position);
	else
		count = count_after_middle(stack, position);
	return (count);
}

void	set_nb_moves(t_list *stack, int index)
{
	t_list	*tmp;
	int		position;
	int		middle;
	int		n_moves;

	tmp = stack;
	position = get_position(stack, index);
	middle = ft_lstsize(stack) / 2;
	n_moves = count(stack, position, middle);
	while (tmp)
	{
		if (tmp->index == index)
			tmp->nb_moves = n_moves;
		tmp = tmp->next;
	}
}

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
