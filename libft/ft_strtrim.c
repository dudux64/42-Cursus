/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:26:15 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 14:21:26 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_start(const char *str, const char *set)
{
	size_t	i;

	i = 0;
	while (str)
	{
		if (str[i] == set[0])
			i++;
		else
			return (i);
	}
	return (0);
}

size_t	ft_end(const char *str, const char *set)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (str)
	{
		if (str[i] == set[0])
			i--;
		else
			return (i);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;
	int		i;
	int		a;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set) + 1;
	i = (end - start + 1) * 1;
	trimmed = malloc(i * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	a = 0;
	while (i > 0)
	{
		trimmed[a] = s1[start];
		start++;
		a++;
		i--;
	}
	a--;
	trimmed[a] = '\0';
	return (trimmed);
}
/*
int	main(void)
{
	const char s1[] = " carlos Euadroddadadad         ";
	const char set[] = " ";
	printf("%s", ft_strtrim(s1, set));
}
*/