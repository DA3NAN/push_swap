/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:30:18 by aait-mal          #+#    #+#             */
/*   Updated: 2023/02/01 19:22:42 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_size;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	(void)stack_b;
	stack_size = check_valid_stack(ac, av, &stack_a);
	if (ac < 2 || !stack_size)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	else
	{
		ft_printf("enter");
		// push_swap(&stack_a, &stack_b);
		// ft_lstclear(&stack_a);
		// ft_lstclear(&stack_b);
	}
	return (0);
}
