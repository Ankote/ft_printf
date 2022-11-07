/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 05:34:25 by aankote           #+#    #+#             */
/*   Updated: 2022/11/06 05:34:27 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(const char *format, va_list args, int i, int size)
{
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			if (format[i + 1] == 'c')
				size += ft_putchar(va_arg(args, int));
			else if (format[i + 1] == 's')
				size += ft_putstr(va_arg(args, char *));
			else if (format[i + 1] == 'x' || format[i + 1] == 'X')
				size += ft_puthixa(va_arg(args, unsigned long), format[i + 1]);
			else if (format[i + 1] == 'u')
				size += ft_putunsdic(va_arg(args, unsigned int));
			else if (format[i + 1] == 'p')
				size += ft_pointer(va_arg(args, unsigned long));
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
				size += ft_putnbr(va_arg(args, int));
			else
				size += ft_putchar(format[i + 1]);
			i++;
		}
		else
			size += ft_putchar(format[i]);
		i++;
	}
	return (size);
}

int	ft_printf(const char *format, ...)
{
	int		size;
	va_list	args;

	size = 0;
	va_start(args, format);
	size = ft_format(format, args, 0, 0);
	va_end(args);
	return (size);
}
