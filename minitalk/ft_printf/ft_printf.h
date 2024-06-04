/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akay <akay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:57:12 by akay              #+#    #+#             */
/*   Updated: 2023/11/28 18:52:12 by akay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char	*str, ...);
int	ft_formats(va_list arg, const char format);
int	ft_printcharacter(int c);
int	ft_printstr(char *str);
int	ft_printptr(unsigned long x);
int	ft_printunsigned_nbr(unsigned int x);
int	ft_hexadecimal(unsigned int x, int c);
int	ft_printnbr(int x);

#endif
