/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:57:22 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/26 10:15:34 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	count;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	count = d_len;
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] != 0 && count + 1 < size)
		dst[count++] = src[i++];
	dst[count] = '\0';
	return (s_len + d_len);
}
/*
int	main(void) {
	char dest[20] = "Hello, ";
	const char *src = "World!";

	printf("%ld\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
	return (0);
}
*/