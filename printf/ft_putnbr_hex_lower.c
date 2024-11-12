/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:47:15 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/11 21:55:17 by cda-silv         ###   ########.fr       */
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

int	ft_putnbr_hex_lower(unsigned int numb)
{
	int	len;

	len = get_len(numb);
	if (numb > 15)
	{
		ft_putnbr_hex_lower(numb / 16);
		ft_putchar("0123456789abcdef"[numb % 16]);
	}
	else
		ft_putchar("0123456789abcdef"[numb % 16]);
	return (len);
}