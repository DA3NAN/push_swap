/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adnane <adnane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:49:26 by adnane            #+#    #+#             */
/*   Updated: 2023/01/23 16:51:41 by adnane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	divide_chunks(t_list *stack)
{
	int	chunk;
	int	size;

	size = ft_lstsize(stack);
	if (size <= 200)
		chunk = size / 5;
	else if (size <= 500)
		chunk = size / 9;
	else
		chunk = size / 12;
	return (chunk);
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

void	sort_three(t_list **stack)
{
	t_list	*tmp;
	int		first;
	int		second;
	int		last;

	tmp = *stack;
	first = tmp->index;
	second = tmp->next->index;
	last = tmp->next->next->index;
	if (first > second && first < last)
		sa(stack);
	else if (first > second && second > last)
	{
		sa(stack);
		rra(stack);
	}
	else if (first > second && first > last && second < last)
		ra(stack);
	else if (first == 0)
	{
		sa(stack);
		ra(stack);
	}
	else
		rra(stack);
}

void	sort_five(t_list stack)
{

}

int	easy_cases(t_list **stack)
{
	int	size;

	size = ft_lstsize(*stack);
	if (size == 1)
		return (1);
	else if (size == 2)
	{
		if (!is_sorted(*stack))
			sa(stack);
		return (1);
	}
	else if (size == 3)
	{
		if (!is_sorted(*stack))
		{
			sort_three(stack);
		}
		return (1);
	}
	else
		sort_five(stack);
	return (0);
}
