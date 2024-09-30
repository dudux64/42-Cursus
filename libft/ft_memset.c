/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:43:15 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/30 13:43:15 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

void *ft_memset(void *dest, int c, size_t count)
{
    size_t i;
    i = 0;
    char *ptr = dest;

    while (i < count)
    {
        ptr[i] = c;
        i++;
    }
    return dest;
}
int main() {
    char str[50] = "Hello World!";
    printf("Antes: %s\n", str);
    ft_memset(str, '*', 5); 
    printf("Depois: %s\n", str); 
}