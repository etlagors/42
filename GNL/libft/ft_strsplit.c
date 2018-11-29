/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:45:05 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/07 14:45:07 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		end;

	tab = (char **)malloc(sizeof(char *) * (ft_strsplit_cnt_word(s, c) + 1));
	if (!tab || !s)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s == (char const)c && *s != '\0')
			s++;
		if (*s != (char const)c && *s != '\0')
		{
			end = 0;
			while (s[end] != (char const)c && s[end] != '\0')
				end++;
			tab[i] = malloc(sizeof(char) * end);
			ft_strncpy(tab[i], s, end);
			tab[i++][end] = '\0';
			s += end;
		}
	}
	tab[i] = 0;
	return (tab);
}
