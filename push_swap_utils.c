/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:58:18 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/20 17:03:29 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_valid_number(char *p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		if (ft_isdigit(p[i]) || ((p[i] == '-' || p[i] == '+') && i == 0
				&& ft_isdigit(p[i + 1])))
			i++;
		else
			return (0);
	}
	return (1);
}

int	count_numbers(int ac, char **av)
{
	char	**splited_numbers;
	int		i;
	int		j;
	int		count;

	count = 0;
	i = 1;
	while (i < ac)
	{
		splited_numbers = ft_split(av[i], ' ');
		j = 0;
		while (splited_numbers[j])
		{
			if (!check_valid_number(splited_numbers[j]))
			{
				free_all(splited_numbers, j);
				return (0);
			}
			j++;
		}
		count = count + j;
		i++;
	}
	free_all(splited_numbers, j);
	return (count);
}

int	check_valid_stack(int ac, char **av, t_list **stack)
{
	int	words_number;
	int	i;

	i = 1;
	words_number = count_numbers(ac, av);
	if (!words_number)
		return (0);
	while (i < ac)
	{
		if (!ft_fill_stack(av[i], stack))
			return (0);
		i++;
	}
	if (check_duplicate(stack))
		return (0);
	return (words_number);
}

int	ft_fill_stack(char *str, t_list **stack)
{
	char		**numbers;
	int			i;

	numbers = ft_split(str, ' ');
	i = -1;
	while (numbers[++i])
	{
		if (ft_atoi(numbers[i]) == 4294967295)
		{
			ft_lstclear(stack);
			free_all(numbers, i);
			return (0);
		}
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(numbers[i])));
	}
	free_all(numbers, i);
	return (1);
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	chunk;

	index_stack(stack_a);
	if (is_sorted(*stack_a))
	{
		return ;
	}
	if (easy_cases(stack_a, stack_b))
		return ;
	chunk = divide_chunks(*stack_a);
	push_to_b(stack_a, stack_b, chunk);
	push_to_a(stack_a, stack_b);
}
