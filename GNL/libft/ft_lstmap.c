/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:58:58 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/09 11:59:09 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*link;
	t_list	*head;

	if (!lst)
		return (NULL);
	link = malloc(sizeof(t_list));
	head = link;
	link->next = link;
	ft_memcpy(link, f(lst), sizeof(t_list));
	while (lst->next)
	{
		link->next = malloc(sizeof(t_list));
		ft_memcpy(link->next, f(lst->next), sizeof(t_list));
		lst = lst->next;
		link = link->next;
	}
	return (head);
}
