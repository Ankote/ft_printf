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
#include "libprintf.h"

void puthixa(unsigned int nbr, int base)
{
    if (nbr > 16)
	{
        puthixa(nbr / 16, base);
        puthixa(nbr % 16, base);
	}
	else if (nbr > 9)
	{
		if (base == 'x')
			ft_putchar(nbr + 87);
		else
			ft_putchar(nbr + 55);
	}
	else
	{
		ft_putchar(nbr + 48);
	}
}

int main()
{
	char s[] = "147";
	puthixa(s, 'x');
}