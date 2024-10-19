/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:44:09 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/19 14:44:09 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_countint(int n)
{
    int count = 0;
    if(n < 0)
      count++;
    if(n == 0)
        return (1);
    while(n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}

void ft_revert(char *str)
{  
    int i; 
    int j;
    char temp;
    i = 0;
    j = ft_strlen(str) - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
char *ft_itoa(int n)
{
    int        i;
    int        sign;
    char    *res;
    i = 0;
    sign = (n < 0)? -1 : 1;
    res = malloc(sizeof(char) * (unsigned long long)(ft_countint(n) + 1));
    n = (n < 0)? -n: n;
    if (res == NULL)
        return (NULL);
    if (n == 0)
    {
        res[i++] = '0';
        res[i] = '\0';
        return (res);
    }
    while (n)
    {
        res[i++] = (n % 10) + '0';
        n /= 10;
    }
    if (sign == -1)
        res[i++] = '-';
    res[i] = '\0';
    ft_revert(res);
    return (res);
}
/*
int main()
{
    int num = -123451595;
    char *str = ft_itoa(num);
    printf("Number %d\nString: %s\n", num, str);
    free(str);
    return (0);
}
*/