/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:30:08 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/22 17:03:31 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;
	int	stack_size;

	if (ac < 2 || !check_valid_stack(ac, av))
		ft_printf("Please include a valid stack !");
	else
	{
		stack_a = ft_calloc(sizeof(int), ac);
		stack_b = ft_calloc(sizeof(int), ac);
		stack_size = ac - 1;
		fill_stack(stack_size, av, &stack_a);
		sa(&stack_a, stack_size);
		display_stack(stack_a, stack_size);
	}
	return (0);
}
