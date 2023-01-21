/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:31:18 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/24 11:56:10 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = temp->next;
		free(temp);
	}
}
