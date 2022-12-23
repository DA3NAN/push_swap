/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:11:18 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/23 17:14:25 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(long *stack_a, long **stack_b, int stack_size)
{
	long	*st;
	int		i;

	st = *stack_b;
	i = 0;
	while (stack_size)
	{
		st[i] = stack_a[stack_size - 1];
		i++;
		stack_size--;
	}
}
