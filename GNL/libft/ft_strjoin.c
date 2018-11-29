/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:41:11 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 14:41:16 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	longueur;
	char			*new;

	if (!s1 || !s2)
		return (NULL);
	longueur = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (longueur + 1));
	if (!new)
		return (NULL);
	new = ft_strcpy(new, (char *)s1);
	new = ft_strcat(new, (char *)s2);
	return (new);
}
