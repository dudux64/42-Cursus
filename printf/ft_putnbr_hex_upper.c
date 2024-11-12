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

int	ft_putnbr_hex_upper(unsigned int numb)
{
	int	cont;

	cont = 0;
	if (numb > 15)
		ft_putnbr_hex_upper(numb / 16);
	cont += ft_putchar("0123456789ABCEF"[numb % 16]);
	return (cont);
}