/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:37:04 by cda-silv          #+#    #+#             */
/*   Updated: 2024/09/30 09:37:04 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "CarlosEduardo";
    char str2[] = "Carlosduardo";
    int v = 7;
    printf("%i",strncmp(str1,str2, v));
}
