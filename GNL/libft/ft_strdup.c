/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:06:40 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 10:06:41 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *pointeur;
	char *tab;

	tab = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	pointeur = tab;
	while (*s)
		*pointeur++ = *s++;
	*pointeur = '\0';
	return (tab);
}
