/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:33:27 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/22 17:00:03 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft_dir/libft.h"
# include "ft_printf_dir/ft_printf.h"

int		check_valid_stack(int ac, char **av);
void	fill_stack(int stack_size, char **av, int **stack);
void	display_stack(int *stack, int stack_size);
void	sa(int **stack, int stack_size);

#endif
