/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:27:03 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/28 14:22:18 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *src)
{
	int i;

	i = 0;
	while(src[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{	
	size_t i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (size > 0)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (i);
}
/*
int main()
{
	char src[] = "carlos";
	char dst[] = "";
	size_t size;

	size = 0;
	printf("%s\n",src);
	printf("%ld",ft_strlcpy(dst,src,size));
}
*/
