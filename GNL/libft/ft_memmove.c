/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:51:04 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 09:51:05 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*uc_dest;
	unsigned char	*uc_src;

	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	if (uc_src < uc_dest)
	{
		uc_src += n - 1;
		uc_dest += n - 1;
		while (n != 0)
		{
			*uc_dest-- = *uc_src--;
			n--;
		}
	}
	else
		ft_memcpy(uc_dest, uc_src, n);
	return (dest);
}
