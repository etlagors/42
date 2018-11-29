/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:16:19 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 10:16:21 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p_s;

	p_s = (0);
	while (*str != '\0')
	{
		if (*str == c)
			p_s = (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char*)str);
	if (p_s)
		return (p_s);
	return (0);
}
