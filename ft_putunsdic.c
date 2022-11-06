/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsign_dic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 05:43:55 by aankote           #+#    #+#             */
/*   Updated: 2022/11/05 06:14:02 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libprintf.h"

void ft_unsigned_dic(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + 48);
	}
	else
	{
		ft_putchar(nbr + 48);
	}
}
