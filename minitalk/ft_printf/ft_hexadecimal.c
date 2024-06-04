/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:15:57 by akay              #+#    #+#             */
/*   Updated: 2023/11/28 18:32:52 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int x, int c)
{
	int		len;
	char	*a;
	char	*b;

	len = 0;
	a = "0123456789abcdef";
	b = "0123456789ABCDEF";
	if (x > 15)
	{
		len += ft_hexadecimal(x / 16, c);
		len += ft_hexadecimal(x % 16, c);
	}
	else
	{
		if (c == 'x')
			len += ft_printcharacter(a[x]);
		else if (c == 'X')
			len += ft_printcharacter(b[x]);
	}
	return (len);
}
