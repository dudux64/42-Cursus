/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:17:42 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/02 15:52:05 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *, ...);
int	ft_putchar(const char str);
int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_putunsnbr(unsigned int n);
#endif