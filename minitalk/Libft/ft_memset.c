/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:43:15 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 14:08:27 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)dest;
	while (i < count)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}
/*
int	main(void) {
	char str[50] = "Hello World!";
	printf("Antes: %s\n", str);
	ft_memset(str, '*', 5);
	printf("Depois: %s\n", str);
}
*/