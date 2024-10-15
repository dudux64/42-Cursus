/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:36:09 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/14 20:00:54 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmalloc;
	int	tsize;
	int	i;

	tsize = nmemb * size;
	tmalloc = (char *) malloc(tsize);
	if (tmalloc == NULL)
		return(NULL);
	i = 0;
	while (i <= tsize)
	{
		tmalloc[i] = '\0';
		i++;
	}
	return(tmalloc);
}
/*
int main()
{
	ft_calloc(6, 1 * (sizeof char));
}
*/
