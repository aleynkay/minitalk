/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:29:22 by akay              #+#    #+#             */
/*   Updated: 2023/11/28 19:50:02 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list arg, const char format)
{
	int	len;

	len = 0;
	if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(arg, int));
	else if (format == 'c')
		len += ft_printcharacter(va_arg(arg, int));
	else if (format == 's')
		len += ft_printstr(va_arg(arg, char *));
	else if (format == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_printptr(va_arg(arg, unsigned long));
	}
	else if (format == 'u')
		len += ft_printunsigned_nbr(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_hexadecimal(va_arg(arg, unsigned int), format);
	else if (format == '%')
		len += ft_printcharacter('%');
	return (len);
}

int	ft_printf(const char	*str, ...)
{
	int		i;
	va_list	arg;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			len += ft_formats(arg, str[i]);
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}
