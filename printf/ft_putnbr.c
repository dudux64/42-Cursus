/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:50:11 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/11 20:38:20 by cda-silv         ###   ########.fr       */
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
int	ft_putnbr(int n)
{
	char	n_char;
	int cont = ft_countint(n);

    if (n == -2147483648)
	{
        ft_putstr("-2147483648");
	}
	if (n > -2147483648 && n <= 2147483647)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
		}
		n_char = n % 10 + '0';
		ft_putchar(n_char);
	}
	return (cont);
}
