/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrvarga <adrvarga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:28:30 by adrvarga          #+#    #+#             */
/*   Updated: 2025/12/11 19:59:09 by adrvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	unsigned long int	p;
	char				*hex;
	int					counter;

	counter = 0;
	if (!ptr)
	{
		ft_printstr("(nil)");
		return (5);
	}
	hex = "0123456789abcdef";
	p = (unsigned long int)ptr;
	ft_printstr("0x");
	counter += 2;
	if (p >= 16)
		counter += ft_printhex(p / 16, hex);
	ft_putchar_fd(hex[p % 16], 1);
	counter++;
	return (counter);
}
