/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:30:18 by aait-mal          #+#    #+#             */
/*   Updated: 2023/02/02 14:55:42 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	apply_command(t_list **stack_a, t_list **stack_b, char *command)
{
	if (ft_strcmp("sa\n", command) == 0)
		sa(stack_a);
	else if (ft_strcmp("sb\n", command) == 0)
		sb(stack_b);
	else if (ft_strcmp("ss\n", command) == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp("pa\n", command) == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp("pb\n", command) == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp("ra\n", command) == 0)
		ra(stack_a);
	else if (ft_strcmp("rb\n", command) == 0)
		rb(stack_b);
	else if (ft_strcmp("rr\n", command) == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp("rra\n", command) == 0)
		rra(stack_a);
	else if (ft_strcmp("rrb\n", command) == 0)
		rrb(stack_b);
	else if (ft_strcmp("rrr\n", command) == 0)
		rrr(stack_a, stack_b);
	else
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_size;
	char	*command;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	stack_size = check_valid_stack(ac, av, &stack_a);
	if (ac < 2 || !stack_size)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	else
	{
		while (1)
		{
			command = get_next_line(0);
			if (!command)
			{
				if (is_sorted(stack_a))
					ft_printf("OK\n");
				else
					ft_printf("KO\n");
				break ;
			}
			apply_command(&stack_a, &stack_b, command);
		}
	}
	return (0);
}
