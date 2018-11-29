/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:45:20 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 12:45:22 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		cntr;

	cntr = 1;
	while (cntr < 46340)
	{
		if (cntr * cntr == nb)
			return (cntr);
		cntr++;
	}
	return (0);
}
