/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:07:16 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/14 20:39:13 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_bzero(void *s, size_t len)
{
    size_t i;
    i = 0;
    char *ptr = s;

    while (i < len)
    {
        ptr[i] = '\0';
        i++;
    }
}
/*int main() {
    char str[50] = "Hello World!";
    printf("Antes: %s\n", str);
    ft_bzero(str, 5); 
    printf("Depois: %s\n", str); 
}*/
