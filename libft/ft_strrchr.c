/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:39:26 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 19:09:56 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t mark;

	mark = 0;
	if (ch == 0)
		return ((char *)&str[ft_strlen(str)]);
	while (*str)
	{
		if (*str == ch)
			mark++;
		str++;
	}
	if (mark == 0)
		return (NULL);
	while (*str - 1)
	{
		if (*str == ch)
			return ((char *)str);
		str--;
	}
	return ((char *)str);
}
