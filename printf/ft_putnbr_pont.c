/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pont.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:33:28 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/11 19:33:41 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int ft_putnbr_pont(long int n)
{
    int i;

    i = 0;
    if (n == 0)
	{
        i += ft_putstr("(nil)");
        return (i);
	}
    i += ft_putstr("0x");
    i += ft_putnbr_hex_lower(n);
    return (i);
}