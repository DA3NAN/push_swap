/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:35:18 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/27 19:35:06 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_stack(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	ft_printf("Size of stack : %d\n", ft_lstsize((tmp)));
	while (tmp)
	{
		ft_printf("%d\n", tmp->content);
		tmp = tmp->next;
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
