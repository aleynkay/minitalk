/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:52:22 by akay              #+#    #+#             */
/*   Updated: 2024/06/04 21:10:12 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_handler(int sig_num)
{
	static int	result = 0;
	static int	shift = 0;

	if (sig_num == SIGUSR1)
		result += 1 << (7 - shift);
	shift++;
	if (shift == 8)
	{
		write(1, &result, 1);
		result = 0;
		shift = 0;
	}
}

int	main(void)
{
	ft_printf("\nWELCOME TO SERVER\n\nSERVER PID : %d\n", getpid());
	signal(SIGUSR1, bit_handler);
	signal(SIGUSR2, bit_handler);
	while (1)
		pause();
	return (0);
}
