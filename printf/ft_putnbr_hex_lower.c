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

int	ft_putnbr_hex_lower(unsigned int numb)
{
	int	cont;

	cont = 0;
	if (numb > 15)
		ft_putnbr_hex_lower(numb / 16);
	cont += ft_putchar("0123456789abcdef"[numb % 16]);
	return (cont);
}