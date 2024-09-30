/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:24:29 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/30 11:24:29 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int neg;
    int resultado;
    i = 0;
    resultado = 0;
    neg = 1;

    while (str[i] <= 32)
        i++;
	if (str[i] == '-')
		neg *= -1;
	i++;
    while(str[i])
    {
        if ((str[i] >= 48) && (str[i] <= 57))
            resultado = resultado * 10 + (str[i] - '0');
        else
            break;
        i++;
    }
    return (resultado * neg);
}
int main() {
    const char *numStr = "   -12345abc";  // String a ser convertida
    int number = ft_atoi(numStr);
    
    printf("O número convertido é: %d\n", number);
    
    return 0;
}