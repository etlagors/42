/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:17:18 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 10:17:19 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*hay;
	const char	*nee;
	const char	*temp;

	hay = haystack;
	nee = needle;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*hay != '\0')
	{
		if (*hay == *needle)
		{
			nee = needle;
			temp = hay;
			while (*nee == *temp && *nee != '\0')
			{
				nee++;
				temp++;
			}
			if (*nee == '\0')
				return ((char *)hay);
		}
		hay++;
	}
	return (0);
}
