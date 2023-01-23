/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floki <floki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:17:30 by floki             #+#    #+#             */
/*   Updated: 2023/01/22 16:14:35 by floki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list *stack)
{
	t_list	*tmp;
	int		min;

	tmp = stack;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

static int	get_new(t_list *stack, int min)
{
	t_list	*tmp;
	int		new_min;

	tmp = stack;
	while (tmp)
	{
		if (tmp->content > min)
		{
			new_min = tmp->content;
			break ;
		}
		tmp = tmp->next;
	}
	return (new_min);
}

static int	get_next_min(t_list *stack, int min)
{
	t_list	*tmp;
	int		new_min;

	new_min = get_new(stack, min);
	tmp = stack;
	while (tmp)
	{
		if (tmp->content < new_min && tmp->content > min)
			new_min = tmp->content;
		if (tmp->content == min)
			tmp = tmp->next;
		else
			tmp = tmp->next;
	}
	return (new_min);
}

void	index_stack(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		min;
	int		i;

	tmp = *stack;
	min = get_min(tmp);
	i = 0;
	while (tmp)
	{
		tmp1 = *stack;
		while (tmp1)
		{
			if (tmp1->content == min)
			{
				tmp1->index = i++;
				break ;
			}
			tmp1 = tmp1->next;
		}
		min = get_next_min(*stack, min);
		tmp = tmp->next;
	}
}
