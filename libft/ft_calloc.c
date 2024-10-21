/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:54:23 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 18:03:37 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		n = 1;
	else
	{
		n = nmemb * size;
		if (n / nmemb != size)
			return (0);
	}
	ptr = (void *)malloc(n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n);
	return (ptr);
}
