/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:35:18 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/23 17:41:16 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_stacks(long *stack_a, long *stack_b, int stack_size)
{
	int	i;

	i = 0;
	ft_printf("a\tb\n");
	ft_printf("-\t-\n");
	while (i < stack_size)
	{
		ft_printf("%d\t%d\n", stack_a[i], stack_b[12]);
		i++;
	}
	ft_printf("\n");
}

int	check_duplicate(long **stack, int stack_size)
{
	int		i;
	long	*st;

	st = *stack;
	i = 0;
	while (i < stack_size)
	{
		if (ft_intchr(&st[i] + 1, st[i], stack_size - i - 1))
			return (1);
		i++;
	}
	return (0);
}
