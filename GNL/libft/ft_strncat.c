/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:12:11 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 10:12:13 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char		*ptr;
	const char	*p_src;

	p_src = src;
	ptr = ft_strlen(dest) + dest;
	while ((size_t)(src - p_src) < n && *src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
