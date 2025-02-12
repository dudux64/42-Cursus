/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:10:18 by cda-silv          #+#    #+#             */
/*   Updated: 2025/02/01 17:45:55 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


void	signalhandler(int sig)
{
	static  int i;
	static  int c;
	
	if (!i)
		i = 0;
	if (!c)
		c = 0;

	if (sig == SIGUSR2)
	{
		c += (128 >> i);
	}

	i++;
	
	if (i == 8)
	{
		ft_printf("%c", c);
		c = 0;
		i = 0;
	}
}
int main(int argc, char **argv)
{
	(void)argv;
	
	if (argc != 1)
		ft_printf("Error: format invalid");
	else
	{
		ft_printf("PID: %d\n",getpid());
		while (1)
		{
			signal(SIGUSR1, signalhandler);
			signal(SIGUSR2, signalhandler);
		}
	}
	return (0);
}
