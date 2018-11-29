/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:56:29 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 14:56:31 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	char	*new;

	size = ft_size_itoa(n);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	*(new + size) = '\0';
	if (n < 0)
		*new = '-';
	if (n == 0)
		*new = '0';
	while (n != 0)
	{
		*(new + --size) = '0' + ft_abs(n % 10);
		n /= 10;
	}
	return (new);
}
