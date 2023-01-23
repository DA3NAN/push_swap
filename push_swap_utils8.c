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
