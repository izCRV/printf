/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:48:05 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/13 14:09:02 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pnbr(int n)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ft_pchar('-');
		ln *= -1;
	}
	if (ln <= 9)
		ft_pchar(ln + '0');
	else
	{
		ft_pnbr(ln / 10);
		ft_pnbr(ln % 10);
	}
	return (1);
}