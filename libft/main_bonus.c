/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:35:57 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/09 14:05:17 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	t_list	*new_str;
	new_str = ft_strtolst(av[1]);
	ft_putstr(new_str->content);
	
	ft_putstr("\n");

	char *test = ft_lsttostr(new_str);
	ft_putstr(test);
	return (0);
}
