/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:26:15 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 17:32:08 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	if (!s1)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, *(s1 + i)) != 0)
		i++;
	if (s1[i] == 0)
		len = 1;
	else
		len = ft_strlen(s1 + i);
	while (len && ft_strchr(set, s1[len + i]) != 0)
		len--;
	return (ft_substr(s1 + i, 0, len + 1));
}
/*
int	main(void)
{
	const char	s1[] = " carlos Euadroddadadad         ";
	const char	set[] = " ";

	printf("%s", ft_strtrim(s1, set));
}
*/