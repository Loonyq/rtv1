/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:02:17 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/16 16:02:20 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *start;

	if (!lst)
		return (NULL);
	new_list = f(lst);
	start = new_list;
	while (lst->next)
	{
		lst = lst->next;
		new_list->next = f(lst);
		new_list = new_list->next;
	}
	return (start);
}
