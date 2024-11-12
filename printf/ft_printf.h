/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:17:42 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/11 21:48:08 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *str, ...);
int	ft_putchar(const char str);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_hex_lower(unsigned int numb);
int	ft_putnbr_hex_upper(unsigned int numb);
int ft_put_u(unsigned int n);
int ft_putnbr_pont(long int n);
#endif