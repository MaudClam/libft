/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:48:09 by mclam             #+#    #+#             */
/*   Updated: 2021/09/29 19:48:09 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	spec_cond(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -1 * nb;
	}
	return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		dgts;
	int		nb_;

	dgts = 1;
	n = spec_cond(n, fd);
	nb_ = n;
	while (nb_ > 9)
	{
		nb_ = nb_ / 10;
		dgts = dgts * 10;
	}
	while (dgts != 0)
	{
		ft_putchar_fd(n / dgts + '0', fd);
		n = n % dgts;
		dgts = dgts / 10;
	}
}
