/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:58:54 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/07 21:58:54 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_putnbr_hex_lower(unsigned int numb)
{   
    unsigned int result;
    int count = 0;
    if (numb == 0)
        return ft_putstr("0x0");
    if (numb >= 16)
        count += ft_putnbr_hex(numb / 16);
    result = numb % 16;
    if (result < 10)
        count += ft_putchar(result + '0');
    else
        count += ft_putchar(result - 10 + 'a');
    return count;
}
int ft_putnbr_hex_upper(unsigned int numb)
{   
    unsigned int result;
    int count = 0;
    if (numb == 0)
        return ft_putstr("0x0");
    if (numb >= 16)
        count += ft_putnbr_hex(numb / 16);
    result = numb % 16;
    if (result < 10)
        count += ft_putchar(result + '0');
    else
        count += ft_putchar(result - 10 + 'A');
    return count;
}
int ft_putnbr_hex(unsigned int numb)
{
    unsigned int i;
    i = 0;
    if(numb == 'x')
        i +=ft_putnbr_hex_lower(numb);
    if (numb == 'X')
    {
        i += ft_putnbr_hex_upper(numb);
    }
     return (i);
}
