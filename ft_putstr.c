/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:07:27 by aankote           #+#    #+#             */
/*   Updated: 2022/11/05 02:07:31 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstrnull(const char *s)
{
	int		i;
	int		cpt;
	char	*p;

	cpt = 0;
	i = 0;
	if (!s)
	{
		p = "(null)";
		while (p[i])
		{
			cpt += ft_putchar(p[i++]);
		}
	}
	return (cpt);
}

int	ft_putstr(const char *s)
{
	int	i;
	int	cpt;

	cpt = 0;
	i = 0;
	if (!s)
		return (ft_putstrnull(s));
	while (s[i])
	{
		cpt += ft_putchar(s[i++]);
	}
	return (cpt);
}
