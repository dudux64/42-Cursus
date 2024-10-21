/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:17:19 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/19 21:17:19 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
 {
     size_t len1;
     size_t len2;
     char *str;
     if (s1 == NULL ||s2 == NULL)
        return NULL;
     len1 = ft_strlen(s1);
     len2 = ft_strlen(s2);
     str = malloc((len1 + len2 + 1) * sizeof(char));
     if (str == NULL)
        return NULL;
    ft_strlcpy(str, s1, len1);
    ft_strlcat(str, s2, len2);
    return(str);
}
/*
int main()
{
    char const str1[] = "carlos";
    char const str2[] = "Eduardo";
    printf("%s\n",ft_strjoin(str1,str2));
}
*/