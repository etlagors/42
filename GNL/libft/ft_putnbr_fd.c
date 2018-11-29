/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:11:10 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/08 09:11:12 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int tab[10];
	int *pointeur;

	pointeur = tab;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (n != 0)
	{
		*pointeur = n % 10;
		if (*pointeur < 0)
			*pointeur = *pointeur * -1;
		pointeur++;
		n = n / 10;
	}
	while (pointeur > tab)
	{
		pointeur--;
		ft_putchar_fd(*pointeur + '0', fd);
	}
}
