/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned_nbr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:24:45 by akay              #+#    #+#             */
/*   Updated: 2023/11/28 15:43:22 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned_nbr(unsigned int x)
{
	int	len;

	len = 0;
	if (x > 9)
	{
		len += ft_printunsigned_nbr(x / 10);
		len += ft_printunsigned_nbr(x % 10);
	}
	else
		len += ft_printcharacter(x + '0');
	return (len);
}
