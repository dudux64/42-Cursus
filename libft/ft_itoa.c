/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:44:09 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/26 10:37:25 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countint(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	res = malloc(sizeof(char) * (unsigned long long)(ft_countint(n) + 1));
	if (res == NULL)
		return (NULL);
	i = ft_countint(n);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res[i] = '\0';
	while (n)
	{
		res[--i] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}

/*
int	main(void)
{
	int		num;
	char	*str;

	num = -123451595;
	str = ft_itoa(num);
	printf("Number %d\nString: %s\n", num, str);
	free(str);
	return (0);
}
*/