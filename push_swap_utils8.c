/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils8.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adnane <adnane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:47:16 by adnane            #+#    #+#             */
/*   Updated: 2023/01/23 20:52:45 by adnane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_befor_middle(t_list *stack, int position)
{
	t_list	*tmp;
	int		count;

	tmp = stack;
	count = 0;
	while (tmp && position)
	{
		count++;
		position--;
		tmp = tmp->next;
	}
	return (count);
}


int	count_after_middle(t_list *stack, int position)
{
	t_list	*tmp;
	int		count;

	tmp = stack;
	count = 0;
	while (tmp && position)
	{
		position--;
		tmp = tmp->next;
	}
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

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

int	get_nb_moves(t_list	*stack, int	index)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp)
	{
		if(tmp->index == index)
			return(tmp->nb_moves);
		tmp = tmp->next;
	}
	return (0);
}
