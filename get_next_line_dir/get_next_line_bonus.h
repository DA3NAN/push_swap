/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:34:25 by aait-mal          #+#    #+#             */
/*   Updated: 2023/02/02 13:43:42 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
#  define OPEN_MAX 65534
# endif

# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>
# include <limits.h>

char	*get_next_line_bns(int fd);
char	*ft_strjoin_bns(char *s1, char *s2);
char	*get_new_line_bns(char *string);
char	*get_left_string_bns(char	*string);

#endif
