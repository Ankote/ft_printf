/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:10:01 by aankote           #+#    #+#             */
/*   Updated: 2022/11/05 02:12:18 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_putnbr(int nbr);
int	ft_puthixa(unsigned int nbr, int base);
int	ft_putunsdic(unsigned int nbr);
int	ft_pointer(unsigned long nbr);
int	ft_printf(const char *format, ...);

#endif
