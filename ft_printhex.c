/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrvarga <adrvarga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:19:25 by adrvarga          #+#    #+#             */
/*   Updated: 2025/12/11 20:05:57 by adrvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long int arg, char *hex)
{
	int	counter;

	counter = 0;
	if (arg >= 16)
		counter += ft_printhex(arg / 16, hex);
	ft_putchar_fd(hex[arg % 16], 1);
	counter++;
	return (counter);
}
