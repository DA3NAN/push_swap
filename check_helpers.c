/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:18:57 by aait-mal          #+#    #+#             */
/*   Updated: 2023/02/02 15:38:46 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_index_there(t_list *stack, int index)
{
	while (stack)
	{
		if (stack->index == index)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	is_sorted(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (tmp->next->index < tmp->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	set_get(t_list *stack, int index)
{
	int	nb_mv;

	set_nb_moves(stack, index);
	nb_mv = get_nb_moves(stack, index);
	return (nb_mv);
}
