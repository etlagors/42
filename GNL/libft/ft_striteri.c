/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:29:54 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 14:29:56 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	cntr;

	cntr = 0;
	if (!s || !f)
		return ;
	while (s[cntr] != '\0')
	{
		f(cntr, &s[cntr]);
		cntr++;
	}
}
