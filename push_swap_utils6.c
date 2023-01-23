/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils6.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adnane <adnane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:45:27 by adnane            #+#    #+#             */
/*   Updated: 2023/01/23 16:52:35 by adnane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position(t_list *stack, int index)
{
	t_list	*tmp;
	int		position;

	tmp = stack;
	position = 0;
	while (tmp)
	{
		if (tmp->index == index)
			return (position);
		position++;
		tmp = tmp->next;
	}
}
