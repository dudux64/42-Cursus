/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:00:10 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/28 12:04:04 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<ctype.h>
#include<stdio.h>

int	ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return (16384);
	else
			return (0);
}
int main()
{
	printf("%i\n",ft_isprint(' '));
	printf("%i",isprint(' '));
}
