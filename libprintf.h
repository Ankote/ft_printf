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

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
void ft_putchar(int c);
void ft_putstr(const char *s);
void ft_putnbr(int nbr);
void puthixa(unsigned int nbr, int base);
void upper(unsigned int nbr);

# endif
