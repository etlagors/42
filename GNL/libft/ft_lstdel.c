/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:18:10 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/09 11:27:30 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*link_to_del;
	t_list	*next_link;

	link_to_del = *alst;
	next_link = *alst;
	while (link_to_del)
	{
		next_link = link_to_del->next;
		del((link_to_del)->content, (link_to_del)->content_size);
		free(link_to_del);
		link_to_del = next_link;
	}
	*alst = NULL;
}
