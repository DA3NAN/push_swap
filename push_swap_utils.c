/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:58:18 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/22 22:02:31 by aait-mal         ###   ########.fr       */
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

int	check_valid_stack(int ac, char **av, int **stack)
{
	int	words_number;

	words_number = count_numbers(ac, av);
	if (!words_number)
		return (0);
	*stack = ft_calloc(sizeof(int), words_number);
	fill_stack(ac, av, stack);
	return (words_number);
}

void	fill_stack(int ac, char **av, int **stack)
{
	char	**tmp;
	int		*st;
	int		i;
	int		j;
	int		k;

	st = *stack;
	i = 1;
	k = 0;
	while (i < ac)
	{
		j = 0;
		tmp = ft_split(av[i], ' ');
		while (tmp[j])
		{
			st[k] = ft_atoi(tmp[j]);
			j++;
			k++;
		}
		i++;
	}
}
