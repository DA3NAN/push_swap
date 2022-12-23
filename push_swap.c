/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:30:08 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/23 19:37:33 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	long	*stack_a;
	long	*stack_b;
	int		stack_size;


	stack_size = check_valid_stack(ac, av, &stack_a);
	stack_b = malloc(1 * sizeof(long));
	if (ac < 2 || !stack_size)
	{
		write(2, "Error", 5);
		exit(1);
	}
	else
	{
		display_stacks(stack_a, stack_b, stack_size);
		// sa(&stack_a, stack_size);
		// pb(stack_a, &stack_b, stack_size);
		// display_stacks(stack_a, stack_b, stack_size);
	}
	return (0);
}
