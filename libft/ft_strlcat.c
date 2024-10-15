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

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
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
/*
int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    
    printf("Resultado: %ld\n", ft_strlcat(dest, src, 20));
    printf("Resultado: %s\n", dest);
    return 0;
}
*/