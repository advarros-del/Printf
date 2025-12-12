/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrvarga <adrvarga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:15:03 by adrvarga          #+#    #+#             */
/*   Updated: 2025/12/11 20:06:05 by adrvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		check_the_flag(const char *format, va_list arg, int i);
int		ft_printch(char c);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_printhex(unsigned long int arg, char *hex);
void	ft_putchar_fd(char c, int fd);
int		ft_printunsig(unsigned int n);
int		ft_printptr(void *ptr);
#endif
