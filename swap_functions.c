/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:10:58 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/23 17:14:13 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(long **stack, int stack_size)
{
	long	*st;
	int		tmp;
	int		i;

	st = *stack;
	i = 0;
	if (stack_size >= 2)
	{
		tmp = st[0];
		st[0] = st[1];
		st[1] = tmp;
	}
}
