/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:29:06 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 14:14:12 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	var;

	i = 0;
	var = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			var = i;
		i++;
	}
	return ((char *)&s[var]);
}
/*
int	main(void)
{
	printf("%s\n",ft_strrchr("carloas",'a'));
	printf("%s",strrchr("carloas",'a'));
}
*/
