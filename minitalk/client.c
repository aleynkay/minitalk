/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:52:19 by akay              #+#    #+#             */
/*   Updated: 2024/06/04 21:10:51 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}

void	send_bit(int pid, char str)
{
	int	shift;

	shift = 0;
	while (shift < 8)
	{
		if ((str << shift) & 128)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		shift++;
	}
}

int	main(int args, char **argv)
{
	int		pid;
	char	*str;
	int		i;

	i = 0;
	if (args == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		while (str[i])
		{
			send_bit(pid, str[i]);
			i++;
		}
	}
	else
		ft_printf("ERROR!!!!!!!");
	return (0);
}
