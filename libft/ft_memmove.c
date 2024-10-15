/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:56:27 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/05 12:00:54 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *ptr;
	char *str;

	ptr = (char *)dest;
	str = (char *)src;
	i = 0;
	if (ptr < str || ptr > str + n)
		while (i <= n)
		{
			ptr[i] = str[i];
			i++;
		}
	else
		while((int)n > 0)
		{
			ptr[n] = str[n];
			n--;	
		}
	return (ptr);
}
