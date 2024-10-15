/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:27:18 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/28 14:32:29 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int ch)
{
	if(ch >= 97 && ch <= 122)
		return (ch - 32);
	else
		return (ch);
}
/*
int main()
{
	printf("%c",ft_toupper('9'));
}
*/
