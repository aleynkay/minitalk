/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:53:02 by akay              #+#    #+#             */
/*   Updated: 2024/04/02 18:31:02 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf/ft_printf.h"

# include <unistd.h>
# include <signal.h>

int		ft_atoi(const char *str);
void	send_bit(int pid, char str);
void	bit_handler(int sig_num);
#endif
