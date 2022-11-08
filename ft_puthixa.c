/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthixa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:59:41 by aankote           #+#    #+#             */
/*   Updated: 2022/11/05 03:06:13 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	count(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

int	ft_puthixa(unsigned int nbr, int base)
{
	if (nbr >= 16)
	{
		ft_puthixa(nbr / 16, base);
		ft_puthixa(nbr % 16, base);
	}
	else if (nbr > 9)
	{
		if (base == 'x')
		{
			ft_putchar(nbr + 87);
		}
		else
			ft_putchar(nbr + 55);
	}
	else
	{
		ft_putchar(nbr + 48);
	}
	return (count(nbr));
}
