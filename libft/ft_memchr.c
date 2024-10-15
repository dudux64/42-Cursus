/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:10:23 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/05 13:28:29 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char *pont = (char *)str;

	i = 0;
	while (i < n)
	{
		if (pont[i] == c)
			return (&pont[i]);
		else
			i++;
	}
	return (0);
}
/*
int main() {
    const char str[] = "Hello, World!";
    char ch = '0';
    size_t n = 9; 

    printf("Encontrado %s",(char *)ft_memchr(str,ch,n));
    return 0;
}
*/

