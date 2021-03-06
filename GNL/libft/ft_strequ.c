/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:34:47 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 14:34:49 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
	{
		if (s1 == s2)
			return (1);
		return (0);
	}
	while (*s1 == *s2 && *s1 != '\0')
	{
		++s1;
		++s2;
	}
	return (*s1 == *s2);
}
