/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:56:08 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/11 19:33:38 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

static int	ft_countint(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putunsnbr(unsigned int n)
{
	char	n_char;

	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	n_char = n + '0';
	write(1, &n_char, 1);
	return (ft_countint(n));
}
