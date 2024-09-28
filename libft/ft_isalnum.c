/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:31:34 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/28 11:35:53 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (8);
	else if (c >= 65 && c <= 90)
		return (8);
	else if (c >= 97 && c <= 122)
		return (8);
	else
		return (0);
}
int main()
{
	printf("%i\n",ft_isalnum('a'));
	printf("%i\n",isalnum('a'));
}
