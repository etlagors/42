/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:09:03 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 10:09:05 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	cntr;

	cntr = 0;
	while (cntr < n && src[cntr] != '\0')
	{
		dest[cntr] = src[cntr];
		cntr++;
	}
	while (cntr < n)
	{
		dest[cntr] = '\0';
		cntr++;
	}
	return (dest);
}
