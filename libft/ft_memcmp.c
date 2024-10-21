/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:35:26 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 17:32:53 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < (n - 1) && b1[i] == b2[i])
		i++;
	return (b1[i] - b2[i]);
}
/*
int	main(void) {
	char arr1[] = "abcdef";
	char arr2[] = "abcdeg";
	size_t n = 5;
	printf("%i",ft_memcmp(arr1,arr2,n));
	return (0);
}
*/
