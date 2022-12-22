/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:35:18 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/22 22:03:23 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_stack(int *stack, int stack_size)
{
	int	i;

	i = 0;
	while (i < stack_size)
	{
		ft_printf("%d\n", stack[i]);
		i++;
	}
}
