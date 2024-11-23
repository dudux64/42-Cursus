/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:53:27 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/23 14:57:14 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
    size_t	i;

    if (!c)
        return (0);
    i = 0;
    while (c[i] != '\0')
        i++;
    return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
    int		size;
    int		i;
    int		j;
    char	*str;

    if (!s1 || !s2)
        return (NULL);
    size = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc((size + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i] != 0)
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != 0)
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}
