/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:35:18 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/20 19:40:23 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_stack(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = stack_a;
	tmp2 = stack_b;
	ft_printf("\nSize of stack A : %d\n", ft_lstsize((tmp1)));
	ft_printf("Size of stack B : %d\n\n", ft_lstsize((tmp2)));
	ft_printf("=A=\t=B=\n");
	while (tmp1 || tmp2)
	{
		if (tmp2 && tmp1)
		{
			ft_printf("|%d|%d\t|%d|%d\n", tmp1->index, tmp1->content, tmp2->index, tmp2->content);
			tmp2 = tmp2->next;
			tmp1 = tmp1->next;
		}
		else if (tmp1)
		{
			ft_printf("|%d|%d\n", tmp1->index, tmp1->content);
			tmp1 = tmp1->next;
		}
		else if (tmp2)
		{
			ft_printf("\t|%d|%d\n", tmp2->index, tmp2->content);
			tmp2 = tmp2->next;
		}
	}
	ft_printf("\n");
}

int	check_duplicate(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		number;

	tmp = *stack;
	while (tmp)
	{
		number = tmp->content;
		tmp = tmp->next;
		tmp2 = tmp;
		while (tmp2)
		{
			if (tmp2->content == number)
			{
				ft_lstclear(stack, del);
				return (1);
			}
			tmp2 = tmp2->next;
		}
	}
	return (0);
}

int	*lis(t_list **stack, int *size)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *stack;
	(*size) = 1;
	while (tmp1->next)
	{
		tmp2 = tmp1->next;
		if (tmp2->content > tmp1->content)
		{
			(*size)++;
			while (tmp2->next)
			{
				if (tmp2->next->content > tmp2->content)
					(*size)++;
				tmp2 = tmp2->next;
			}
			ft_printf("%d\n", *size);
		}
		tmp1 = tmp1->next;
	}
	ft_printf("%d\n", *size);
	return (0);
}
