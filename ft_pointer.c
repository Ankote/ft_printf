/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:24:44 by aankote           #+#    #+#             */
/*   Updated: 2022/11/06 01:25:02 by aankote          ###   ########.fr       */
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

static int	hixa(unsigned long nbr)
{
	if (nbr >= 16)
	{
		hixa(nbr / 16);
		hixa(nbr % 16);
	}
	else if (nbr > 9)
	{
		ft_putchar(nbr + 87);
	}
	else
		ft_putchar(nbr + 48);
	return (count(nbr));
}

int	ft_pointer(unsigned long nbr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	return (hixa(nbr) + count);
}
