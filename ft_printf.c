/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrvarga <adrvarga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:21:00 by adrvarga          #+#    #+#             */
/*   Updated: 2025/12/12 14:09:16 by adrvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_the_flag(const char *format, va_list args, int i)
{
	unsigned int	counter;

	counter = 0;
	i++;
	if (format[i] == 'c')
		counter = ft_printch(va_arg(args, int));
	else if (format[i] == 's')
		counter = ft_printstr(va_arg(args, char *));
	else if (format[i] == 'p')
		counter = ft_printptr(va_arg(args, void *));
	else if (format[i] == 'd')
		counter = ft_printnbr(va_arg(args, int));
	else if (format[i] == 'i')
		counter = ft_printnbr(va_arg(args, int));
	else if (format[i] == 'u')
		counter = ft_printunsig(va_arg(args, unsigned int));
	else if (format[i] == 'x')
		counter = ft_printhex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format[i] == 'X')
		counter = ft_printhex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format[i] == '%')
		counter = ft_printch('%');
	else
		counter = ft_printch('%');
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	va_start(args, format);
	counter = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			counter = counter + check_the_flag(format, args, i);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
