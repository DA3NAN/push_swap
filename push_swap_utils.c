/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:58:18 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/22 17:00:30 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_valid_number(char *p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		if (ft_isdigit(p[i]) || (p[i] == '-' && i == 0))
			i++;
		else
			return (0);
	}
	return (1);
}

int	check_valid_stack(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!check_valid_number(av[i]))
			return (0);
		i++;
	}
	return (1);
}

void	fill_stack(int stack_size, char **av, int **stack)
{
	int	i;
	int	j;
	int	*st;

	st = *stack;
	i = 1;
	j = 0;
	while (i <= stack_size)
	{
		st[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
}

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
