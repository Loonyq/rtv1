/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:29:35 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/06 16:09:16 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *tmp;

	tmp = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (tmp != NULL)
	{
		ft_strcpy(tmp, str);
		return (tmp);
	}
	else
		return (NULL);
}
