/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:56:27 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/17 22:13:28 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *ptr;
	unsigned char *str;

	ptr = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	if (ptr > str)
		while(n > 0)
		{
			ptr[n] = str[n];
			n--;	
		}
	else
		ft_memcpy(dest,src,n);
	return (dest);
}
