/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mal <aait-mal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:18:31 by aait-mal          #+#    #+#             */
/*   Updated: 2022/12/21 21:07:45 by aait-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putnbr_fd1(int nb, int fd, int *length)
{
	char	buff;

	if (nb == -2147483648)
	{
		ft_putstr_fd1("-2", fd, length);
		ft_putnbr_fd1(147483648, fd, length);
	}
	else if (nb < 0)
	{
		ft_putchar_fd1('-', fd, length);
		ft_putnbr_fd1(-nb, fd, length);
	}
	else if (nb >= 0 && nb <= 9)
	{
		buff = nb + 48;
		ft_putchar_fd1(buff, fd, length);
	}
	else
	{
		ft_putnbr_fd1(nb / 10, fd, length);
		ft_putnbr_fd1(nb % 10, fd, length);
	}
}

void	ft_putnbr_unsiged_fd(unsigned int nb, int fd, int *length)
{
	char	buff;

	if (nb <= 9)
	{
		buff = nb + 48;
		ft_putchar_fd1(buff, fd, length);
	}
	else
	{
		ft_putnbr_fd1(nb / 10, fd, length);
		ft_putnbr_fd1(nb % 10, fd, length);
	}
}

void	ft_putnbr_base(size_t nbr, char *base, int	*length, int C)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (C != 'p')
		nbr = (unsigned int)nbr;
	if (nbr < base_len)
		ft_putchar_fd1(base[nbr], 1, length);
	else
	{
		ft_putnbr_base(nbr / base_len, base, length, C);
		ft_putnbr_base(nbr % base_len, base, length, C);
	}
}
