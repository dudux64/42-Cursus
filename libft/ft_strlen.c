/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:20:27 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/28 13:24:31 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(const char *c)
{
	int i;
	i = 0;

	while(c[i] != '\0')
		i++;
	return (i);
}
/*
int main(int ac,char **av)
{
	if(ac == 2)
		printf("%i",ft_strlen(av[1]));
}
*/
	
