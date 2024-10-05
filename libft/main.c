/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:11:19 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/05 15:15:03 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdio.h>

int main() {
    const char *numStr = "   -12345abc";  // String a ser convertida
    int number = ft_atoi(numStr);
    
    printf("O número convertido é: %d\n", number);
    
    return 0;
}
