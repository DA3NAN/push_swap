/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:58:18 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/31 12:22:02 by aait-mal         ###   ########.fr       */
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
				return (0);
			j++;
		}
		count = count + j;
		i++;
	}
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
	if (check_duplicate(*stack))
		return (0);
	return (words_number);
}

int	ft_fill_stack(char *str, t_list **stack)
{
	char	**numbers;
	int		i;

	numbers = ft_split(str, ' ');
	i = 0;
	while (numbers[i])
	{
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(numbers[i])));
		if (ft_atoi(numbers[i]) == 4294967295)
			return (0);
		i++;
	}
	return (1);
}
