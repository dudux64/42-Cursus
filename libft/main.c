/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:11:19 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/17 22:15:05 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int main()
{
 	char dest[6];
	char src[] = "carlos";
	size_t n = 6;
	ft_memmove(dest,src,n);
	printf("%s",dest);
}
