/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:31:09 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 14:31:11 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	char			*start;
	unsigned int	i;

	if (!s)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	start = new;
	i = 0;
	while (i < ft_strlen(s))
	{
		*new++ = f(s[i]);
		i++;
	}
	*new = '\0';
	return (start);
}
