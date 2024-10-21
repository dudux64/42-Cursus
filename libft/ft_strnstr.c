/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:01:49 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 17:56:25 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s_big;
	char	*s_lit;

	i = 0;
	s_big = (char *)big;
	s_lit = (char *)little;
	if (s_lit[0] == 0)
		return (s_big);
	while (s_big[i] != 0 && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == 0)
				return (s_big + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*big = "This tesis a test string.";
	const char	*little = "test";

	printf("Substring encontrada: %s\n", ft_strnstr(big, little, 13));
}
*/
