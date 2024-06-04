/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:02:38 by akay              #+#    #+#             */
/*   Updated: 2023/11/28 16:02:01 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long x)
{
	int		len;
	char	*a;

	len = 0;
	a = "0123456789abcdef";
	if (x > 15)
	{
		len += ft_printptr(x / 16);
		len += ft_printptr(x % 16);
	}
	else
		len += ft_printcharacter(a[x]);
	return (len);
}
