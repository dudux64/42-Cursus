/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:16:57 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/17 21:36:14 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new;
    size_t len;
    size_t i;

    i = 0;
    len = ft_strlen(s);
    new = malloc ((len + 1)* sizeof (char));
    if (new == NULL)
        return NULL;
    while (i < len) {
        new[i] = f(i, s[i]); 
        i++;
    }
    new[i] = '\0';  
    return new;
}
/*
char ft_toupper(unsigned int a, char ch)
{
    (void)a; 
    if (ch >= 'a' && ch <= 'z')
        return ch -= 32;
    return ch;
}
int main() {
    char s[] = "carlos";
    char *result = ft_strmapi(s, ft_toupper);
    printf("%s\n", result);
    free(result);
    return 0;
}
*/