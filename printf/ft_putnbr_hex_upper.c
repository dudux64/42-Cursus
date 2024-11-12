/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:48:43 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/11 21:49:03 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_len(unsigned long n)
{
	int	len;

	len = 1;
	while (n > 15)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_putnbr_hex_upper(unsigned int numb)
{
	int	len;

	len = get_len(numb);
	if (numb > 15)
	{
		ft_putnbr_hex_upper(numb / 16);
		ft_putchar("0123456789ABCDEF"[numb % 16]);
	}
	else
		ft_putchar("0123456789ABCDEF"[numb % 16]);
	return (len);
}