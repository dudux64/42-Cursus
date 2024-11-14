/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:34:23 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/13 23:46:40 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int n)
{
	int		cont;
	char	i;

	cont = 0;
	if (n >= 10)
		cont += ft_put_u(n / 10);
	i = n % 10 + '0';
	cont += ft_putchar(i);
	return (cont);
}
