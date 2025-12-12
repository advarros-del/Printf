/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrvarga <adrvarga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 12:06:39 by adrvarga          #+#    #+#             */
/*   Updated: 2025/12/11 19:55:56 by adrvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printch(char c)
{
	int	counter;

	counter = 0;
	write(1, &c, 1);
	counter++;
	return (counter);
}
