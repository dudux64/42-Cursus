/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:07:16 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/21 15:35:44 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*int main() {
	char str[50] = "Hello World!";
	printf("%s\n", str);
	ft_bzero(str, 5);
	printf("%s\n", str);
}*/
