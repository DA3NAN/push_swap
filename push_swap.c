/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:30:08 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/27 19:35:42 by aait-mal         ###   ########.fr       */
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
		display_stack(stack_a);
	}
	return (0);
}
