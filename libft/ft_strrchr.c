/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:29:06 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 17:32:02 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (*str != 0)
		str++;
	while (*str != chr && str != (unsigned char *)s)
		str--;
	if (*str == chr)
		return ((char *)str);
	return (0);
}
/*
int	main(void)
{
	printf("%s\n",ft_strrchr("carloas",'a'));
	printf("%s",strrchr("carloas",'a'));
}
*/
