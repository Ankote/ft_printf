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
#include "libprintf.h"

void ft_put_pointr(unsigned int nbr, char base)
{
    ft_putstr("0x");
    puthixa(nbr, base);
}
int main()
{
   ft_put_pointr("10", 'x');
}
