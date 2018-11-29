/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:03:13 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 09:58:39 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	unsigned char	*str;

	str = (unsigned char *)dest;
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	while (n != 0)
	{
		*p_dest++ = *p_src++;
		n--;
	}
	return (str);
}
