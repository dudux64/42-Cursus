/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:37:04 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/14 19:13:03 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n - 1)
	{	
		if (str1[i] == str2[i])
			i++;
		else
			return(str1[i] - str2[i]);
	}
	return(str1[i] - str2[i]);
}
