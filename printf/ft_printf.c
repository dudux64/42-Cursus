/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:25:55 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/02 15:18:15 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

static int get_arg(va_list *ap, char c)
{
    int n;
    n = 0;
    if(c == 'c')
        n = ft_putchar(va_arg(*ap, int));
    if(c == 's')
        n = ft_putstr(va_arg(*ap, char *));
    if(c == 'd' || c == 'i')
        n = ft_putnbr(va_arg(*ap, int));
    if(c == 'u')
        n = ft_put_u(va_arg(*ap,int));
    if(c == 'x')
        n = ft_putnbr_hex(va_arg(*ap,unsigned long), 'x');
    if(c == 'X')
        n = ft_putnbr_hex(va_arg(*ap,unsigned long), 'X');
    if(c == '%')
        n = ft_putchar('%');
    if(c == 'p')
        n = ft_putnbr_pont(va_arg(*ap,long));
    return (n);
}
int ft_printf(const char *str, ...)
{
    va_list args;
    int count;
    int i;
    
    va_start(args, str);
    count = 0;
    i = 0;
    while(str[count])
    {
        if(str[count] == '%')
        {
            count++;
            i += get_arg(&args,str[count]);
        }
        else
            i += ft_putchar(str[count]);
        count++;
    }
    va_end(args);
    return i;
}