/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:33:27 by aait-mal          #+#    #+#             */
/*   Updated: 2023/01/20 18:44:58 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "ft_printf_dir/ft_printf.h"

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_list;

int		check_valid_stack(int ac, char **av, t_list **stack);
void	push_swap(t_list **stack_a, t_list **stack_b);
int		ft_fill_stack(char *str, t_list **stack);
void	display_stack(t_list *stack_a, t_list *stack_b);
int		check_duplicate(t_list **stack);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
char	**ft_split(const char *s, char c);
void	*free_all(char **p, size_t j);
long	ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_lstclear(t_list **lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	sa(t_list **stack);
void	sb(t_list **stack);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);
void	index_stack(t_list **stack);
int		divide_chunks(t_list *stack);
int		easy_cases(t_list **stack);
int		is_sorted(t_list *stack);

#endif
