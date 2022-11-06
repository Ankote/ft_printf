/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:14:28 by aankote           #+#    #+#             */
/*   Updated: 2022/11/05 02:22:11 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libprintf.h"

void ft_putnbr(int nbr)
{
	if (nbr == INT_MIN)
		ft_putstr("-2147483648");
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + 48);
	}
	else
	{
		ft_putchar(nbr + 48);
	}
}
