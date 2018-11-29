/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:03:55 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 15:03:57 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int tab[10];
	int *pointeur;

	pointeur = tab;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
		ft_putchar('-');
	while (nb != 0)
	{
		*pointeur = nb % 10;
		if (*pointeur < 0)
			*pointeur = *pointeur * -1;
		pointeur++;
		nb = nb / 10;
	}
	while (pointeur > tab)
	{
		pointeur--;
		ft_putchar(*pointeur + '0');
	}
}
