/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:57:22 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/30 10:57:22 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

size_t  ft_strlen(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    return (i);
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    int i;
    int j;
    j = 0;
    i = 0;

    while (dest[i])
        i++;
    while (src[j] != '\0' && i + 1 < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (ft_strlen(dest));
}

int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    
    printf("Resultado: %ld\n", ft_strlcat(dest, src, 20));
    printf("Resultado: %s\n", dest);
    return 0;
}