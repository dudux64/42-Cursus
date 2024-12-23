/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:25:24 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 18:30:27 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	n_char;
	char	neg;

	neg = '-';
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n > -2147483648 && n <= 2147483647)
	{
		if (n < 0)
		{
			write(fd, &neg, 1);
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			n %= 10;
		}
		n_char = n + '0';
		write(fd, &n_char, 1);
	}
}
