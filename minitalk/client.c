/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:42:20 by cda-silv          #+#    #+#             */
/*   Updated: 2025/02/12 21:31:56 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	signal;

	if (nptr == 0)
		return (0);
	i = 0;
	n = 0;
	signal = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		n = (n * 10) + nptr[i] - 48;
		i++;
	}
	return (n * signal);
}

static void	bitandbit(int pid, unsigned char octeto)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((octeto >> i) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i--;
		usleep(500);
	}
}

static void	send_msg(int id, char *mense)
{
	int	i;

	i = 0;
	while (mense[i])
	{
		bitandbit(id, mense[i]);
		i++;
	}
	bitandbit(id, '\n');
}

static int	check_menseng(char *pid, char *msg)
{
	if (!msg)
		return (-1);
	while (*pid)
	{
		if (!(*pid >= 48 && *pid <= 57) || *pid < 0)
		{
			ft_printf("PID Not Valid\n");
			return (-1);
		}
		pid++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (check_menseng(argv[1], argv[2]) == -1)
			return (0);
		else
			send_msg(ft_atoi(argv[1]), argv[2]);
	}
	else
	{
		ft_printf("PID OR PHRASE ERROR\n");
	}
}
