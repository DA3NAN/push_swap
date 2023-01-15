/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:30:08 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/09 13:01:27 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_size;

	stack_a = NULL;
	stack_b = NULL;
	stack_size = check_valid_stack(ac, av, &stack_a);
	if (ac < 2 || !stack_size)
	{
		write(2, "Error", 5);
		exit(1);
	}
	else
	{
		display_stack(stack_a, stack_b);
		ft_printf("ss =============\n");
		ss(&stack_a, &stack_b);
		display_stack(stack_a, stack_b);
		ft_printf("rr =============\n");
		rr(&stack_a, &stack_b);
		display_stack(stack_a, stack_b);
		ft_printf("pb =============\n");
		pb(&stack_a, &stack_b);
		display_stack(stack_a, stack_b);
		ft_printf("pb =============\n");
		pb(&stack_a, &stack_b);
		display_stack(stack_a, stack_b);
		ft_printf("ss =============\n");
		ss(&stack_a, &stack_b);
		display_stack(stack_a, stack_b);
		ft_printf("rr =============\n");
		rr(&stack_a, &stack_b);
		display_stack(stack_a, stack_b);
	}
	return (0);
}
