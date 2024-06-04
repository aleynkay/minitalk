/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:44:40 by akay              #+#    #+#             */
/*   Updated: 2023/11/28 15:42:31 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int x)
{
	int	len;

	len = 0;
	if (x == -2147483648)
		len += write(1, "-2147483648", 11);
	else if (x < 0)
	{
		x *= -1;
		len += write(1, "-", 1);
		len += ft_printnbr(x);
	}
	else if (x > 9)
	{
		len += ft_printnbr(x / 10);
		len += ft_printnbr(x % 10);
	}
	else
		len += ft_printcharacter(x + '0');
	return (len);
}
