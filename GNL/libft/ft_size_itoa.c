/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:07:58 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/08 14:08:05 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_size_itoa(int n)
{
	int		size;

	size = 0;
	if (n < 0)
		size++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}