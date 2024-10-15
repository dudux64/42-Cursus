/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:01:49 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/30 10:01:49 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    int var = 0;
    i = 0;
    j = 0;

    if (little[0] == '\0') 
        return (char *)big;
    while (big[i] != '\0' && i <= len)
    {
        if(big[i] == little[j])
        {
            var = i;
        }
        i++;
    }
    return((char *)&big[var]);
}
/*
int main() 
{
    const char *big = "This tesis a test string.";
    const char *little = "test";

    printf("Substring encontrada: %s\n", ft_strnstr(big, little, 13));
}
*/
