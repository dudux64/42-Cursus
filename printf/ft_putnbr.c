/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:50:11 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/02 15:41:31 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char	neg;

	neg = '-';
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n > -2147483648 && n <= 2147483647)
	{
		if (n < 0)
		{
			write(1, &neg, 1);
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			n %= 10;
		}
		n_char = n + '0';
		write(1, &n_char, 1);
	}
	return (ft_countint(n));
}
