/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrvarga <adrvarga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:03:07 by adrvarga          #+#    #+#             */
/*   Updated: 2025/12/12 14:10:02 by adrvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	long int	nb;
	int			counter;

	counter = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
		counter++;
	}
	if (nb >= 10)
		counter += ft_printnbr(nb / 10);
	ft_putchar_fd(nb % 10 + '0', 1);
	counter++;
	return (counter);
}
