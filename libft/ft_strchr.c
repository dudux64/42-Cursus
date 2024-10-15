/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:10:17 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/28 15:50:43 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while(s[i])
	{
		if(s[i] == c)
			return ((char *)&s[i]);
		s++;
	}
	return 0;
}
/*
int main()
{
	printf("%s",ft_strchr("carlos",'r'));
}
*/
