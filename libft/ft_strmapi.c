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
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new;
    size_t len;

    len = ft_strlen(s);
    new = malloc ((len + 1)* sizeof (char));
    if (new == NULL)
        return NULL;
    while(0 < len)
    {
        new[len] = f(len, s[len]);
        len--;
    }
    return (new);
}
char	ft_toupper(unsigned int a, char ch)
{
    (void)a;
    return (ch++);
}
int main()
{
    char s[]= "carlos";
    printf("%s",ft_strmapi(s, ft_toupper));
    

}