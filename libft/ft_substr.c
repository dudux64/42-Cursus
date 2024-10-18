/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:50:47 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/17 20:15:16 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  big;
    size_t  i;
    char    *str;

    big = ft_strlen(s);
    i = 0;
    str = malloc((len + 1) * sizeof (char));
    if (str == NULL)
        return NULL;
    if (len > big - start)
        ft_strdup("");
    while(0 < len)
    {
        str[i] = s[start];
        i++;
        start++;
        len--;
    }
    str[i] = '\0';
    return(str);
}