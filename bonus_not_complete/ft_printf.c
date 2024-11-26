/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <obouizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:52:20 by obouizi           #+#    #+#             */
/*   Updated: 2024/11/26 20:10:05 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int check_specifier(char c, va_list args, const char *str)
{
	int len;

	len = 0;
	if (c == '-')
		len += ft_putspace_after(str, args);
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		len += ft_putchar((char) va_arg(args, int));
	else if (c == 'x')
		len += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == 'u')
		len += ft_putunsint((va_arg(args, unsigned int)));
	else if (c == 'p')
		len += ft_putadresse((va_arg(args, unsigned long long)));
	return (len);
}

int ft_printf(const char *str, ...)
{
	int printlen;
	va_list args;

	va_start(args, str);
	printlen = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) == '%')
		{
			ft_putchar(*str);
			printlen++;
			str++;
		}
		else if (*str == '%' && *(++str) != '\0')
			printlen += check_specifier(*str, args, str);
		else if (*str != '%')
		{
			ft_putchar(*str);
			printlen++;
		}
		str++;
	}
	va_end(args);
	return (printlen);
}
//