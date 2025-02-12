/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:10:23 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/26 10:47:21 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	int				i;

	if (c == 0 && n == 0)
		return (0);
	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (str[i] == chr)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void) {
	const char str[] = "Hello, World!";
	char ch = '0';
	size_t n = 9;

	printf(" %s",(char *)ft_memchr(str,ch,n));
	return (0);
}
*/
