/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:39:04 by ilukaino          #+#    #+#             */
/*   Updated: 2017/08/16 15:39:21 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		free_string(char ***ptr)
{
	char	**tmp;

	if (ptr && *ptr)
	{
		tmp = *ptr;
		while (**ptr)
		{
			free(**ptr);
			**ptr = NULL;
			++*ptr;
		}
		*ptr = tmp;
		free(*ptr);
		*ptr = NULL;
	}
}
