/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:35:18 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/09 12:09:53 by aait-mal         ###   ########.fr       */
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
			ft_printf("%d\t%d\n", tmp1->content, tmp2->content);
			tmp2 = tmp2->next;
			tmp1 = tmp1->next;
		}
		else if (tmp1)
		{
			ft_printf("%d\n", tmp1->content);
			tmp1 = tmp1->next;
		}
		else if (tmp2)
		{
			ft_printf("\t%d\n", tmp2->content);
			tmp2 = tmp2->next;
		}
	}
	ft_printf("\n");
}

int	check_duplicate(t_list *stack)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		number;

	tmp = stack;
	while (tmp)
	{
		number = tmp->content;
		tmp = tmp->next;
		tmp2 = tmp;
		while (tmp2)
		{
			if (tmp2->content == number)
				return (1);
			tmp2 = tmp2->next;
		}
	}
	return (0);
}
