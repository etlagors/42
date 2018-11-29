/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:25:57 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 12:30:25 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		resultat;

	resultat = 0;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb < 2)
		return (1);
	else
	{
		resultat = nb;
		nb--;
		while (nb != 1)
		{
			resultat = resultat * nb;
			nb--;
		}
		return (resultat);
	}
}
