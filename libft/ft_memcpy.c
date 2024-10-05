/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:42:01 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/05 10:55:04 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void *ft_memcpy(void *dest, const void *src,size_t n)
{
	size_t i;
	i = 0;
	char *ptr = (char *)dest;
	char *str = (char *)src;
	while(i <= n)
	{
		ptr[i] = str[i];
		i++;
	}
	return ((void *)ptr);
}

int main()
{
	char dest[6];
	char src[] = "Carlos";
	size_t n = 6;
	printf("%s",(char *)ft_memcpy(dest,src,n));	
}


