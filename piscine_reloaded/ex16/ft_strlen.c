/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:04:28 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 17:04:54 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	char	*pointeur;

	pointeur = str;
	while (*pointeur)
		pointeur++;
	return (pointeur - str);
}
