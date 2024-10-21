/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:42:01 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 14:06:12 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*str;

	i = 0;
	ptr = (char *)dest;
	str = (char *)src;
	while (i <= n)
	{
		ptr[i] = str[i];
		i++;
	}
	return ((void *)ptr);
}
/*
int	main(void)
{
	char	dest[6];
	char	src[] = "Carlos";
	size_t	n;

	n = 6;
	printf("%s",(char *)ft_memcpy(dest,src,n));
}
*/
