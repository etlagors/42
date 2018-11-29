/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:42:35 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 14:42:36 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*start;
	char	*end;
	char	*new_str;

	if (!s)
		return (NULL);
	start = (char *)s;
	end = (char *)s + ft_strlen(s);
	while ((*start == ' ' || *start == '\t' || *start == '\n') && *start)
		start++;
	if (start == end)
		return (ft_strdup(""));
	end--;
	while ((*end == ' ' || *end == '\t' || *end == '\n') && end != start)
		end--;
	end++;
	new_str = malloc(sizeof(char) * (end - start + 1));
	if (!new_str)
		return (NULL);
	new_str = ft_strncpy(new_str, (char*)s + (start - s), end - start);
	new_str[end - start] = '\0';
	return (new_str);
}
