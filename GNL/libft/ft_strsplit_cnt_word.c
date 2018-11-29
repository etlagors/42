/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_cnt_word.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:37:58 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/08 15:38:00 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strsplit_cnt_word(char const *s, char c)
{
	int		word;

	if (!s)
		return (0);
	word = 0;
	while (*s != '\0')
	{
		while (*s == (char const)c && *s != '\0')
			s++;
		if (*s != (char const)c && *s != '\0')
		{
			word++;
			while (*s != (char const)c && *s != '\0')
				s++;
		}
	}
	return (word);
}
