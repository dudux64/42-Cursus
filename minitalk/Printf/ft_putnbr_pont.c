/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pont.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:33:28 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/13 23:42:33 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_len(unsigned long n)
{
	int	len;

	len = 3;
	while (n > 15)
	{
		n /= 16;
		len++;
	}
	return (len);
}

static void	ft_putnbr_base(unsigned long n, char *base)
{
	if (n >= 16)
	{
		ft_putnbr_base(n / 16, base);
		write(1, &base[n % 16], 1);
	}
	if (n < 16)
		write(1, &base[n % 16], 1);
}

int	ft_putnbr_pont(long int n)
{
	if (n == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	ft_putnbr_base(n, "0123456789abcdef");
	return (get_len(n));
}
