/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:06:38 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/28 11:24:52 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int ft_isdigit(int c)
{
	if(c >= 48 && c <= 57)
		return (2048);
	else
		return(0);
}
int main()
{
	printf("%i\n",ft_isdigit('9'));
	printf("%i",isdigit('9'));
}
