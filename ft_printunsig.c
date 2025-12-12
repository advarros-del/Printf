/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrvarga <adrvarga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:03:07 by adrvarga          #+#    #+#             */
/*   Updated: 2025/12/11 16:19:49 by adrvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsig(unsigned int n)
{
	unsigned long int	nb;
	int					counter;

	counter = 0;
	nb = n;
	if (nb >= 10)
		counter += ft_printunsig(nb / 10);
	ft_putchar_fd(nb % 10 + '0', 1);
	counter ++;
	return (counter);
}
