/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:36:36 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 13:38:49 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	char	*pointeur;

	pointeur = str;
	while (*pointeur)
		pointeur++;
	return (pointeur - str);
}

char	*ft_strdup(char *src)
{
	int		longueur;
	char	*start;
	char	*pointeur;

	longueur = ft_strlen(src);
	start = (char *)malloc(sizeof(char) * (longueur + 1));
	if (!start)
		return (NULL);
	pointeur = start;
	while (*src)
		*pointeur++ = *src++;
	*pointeur = '\0';
	return (start);
}
