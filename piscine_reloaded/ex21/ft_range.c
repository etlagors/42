/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:50:52 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 13:52:56 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*pointeur;
	int		*start;

	if (min >= max)
		return (NULL);
	start = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!start)
		return (NULL);
	pointeur = start;
	while (min < max)
	{
		*pointeur = min;
		min++;
		pointeur++;
	}
	*pointeur = '\0';
	return (start);
}
