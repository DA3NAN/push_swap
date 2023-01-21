/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:58:27 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/24 11:57:39 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, int(*f)(int), void (*del)(int))
{
	t_list	*result;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&result);
			return (NULL);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
