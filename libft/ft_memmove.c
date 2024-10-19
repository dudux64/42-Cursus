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

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    size_t i = 0;
	if (d == s || len == 0)
        return dst;
    if (d < s)
    {
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else if (d > s)
    {
        i = len;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return dst;
}
