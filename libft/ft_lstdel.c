/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:05:35 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/16 16:05:39 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	list = *alst;
	if (list && del)
	{
		while (list)
		{
			(*del)(list->content, list->content_size);
			free(list);
			list = list->next;
		}
	}
	*alst = NULL;
}
