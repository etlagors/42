/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:42:20 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 16:42:21 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		cntr;
	int		result;

	cntr = 0;
	result = 0;
	while (tab[cntr] != 0)
	{
		if (f(tab[cntr]))
			result++;
		cntr++;
	}
	return (result);
}
