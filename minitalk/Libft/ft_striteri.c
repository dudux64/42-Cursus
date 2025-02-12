/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:20:23 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/26 11:05:19 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_toupper(unsigned int a, char *ch)
{
	printf("%d\n", a); 
	if (*ch >= 97 && *ch <= 122) 
		*ch -= 32; 
}
int	main(void)
{
	char	s[] = "carlos";

	ft_striteri(s, &ft_toupper);
	printf("%s\n", s); "Carlos"
}
*/