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

static int ft_putnbr_hexadecimal(unsigned int numb)
{   
    unsigned int result;
    int count = 0;
    if (numb == 0)
        return ft_putstr("0x0");
    if (numb >= 16)
        count += ft_putnbr_hexadecimal(numb / 16);
    result = numb % 16;
    if (result < 10)
        count += ft_putchar(result + '0');
    else
        count += ft_putchar(result - 10 + 'a');
    return count;
}

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
    i += ft_putnbr_hexadecimal(n);
    return (i);
}