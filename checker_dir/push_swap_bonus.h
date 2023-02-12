/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:10:46 by aait-mal          #+#    #+#             */
/*   Updated: 2023/02/12 16:03:01 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "../ft_printf_dir/ft_printf.h"
# include "../get_next_line_dir/get_next_line.h"

typedef struct s_list
{
	int				content;
	int				index;
	int				nb_moves;
	struct s_list	*next;
}					t_list;

int		check_valid_stack(int ac, char **av, t_list **stack);
void	push_swap(t_list **stack_a, t_list **stack_b);
int		ft_fill_stack(char *str, t_list **stack);
int		check_duplicate(t_list **stack);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
char	**ft_split(const char *s, char c);
void	free_all(char **p, size_t j);
long	ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_lstclear(t_list **lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	s(t_list **stack);
void	sa(t_list **stack);
void	sb(t_list **stack);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack);
void	r(t_list **stack);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	rr1(t_list **stack);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);
void	free_all_push(char **p);
int		ft_strcmp(const char *s1, const char *s2);
int		is_sorted(t_list *stack);
void	apply_to_stack(t_list **stack_a, t_list **stack_b, char *command);
void	error(void);

#endif
