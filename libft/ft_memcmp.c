/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:35:26 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 14:05:16 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]) && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
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
