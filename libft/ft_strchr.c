/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:25:41 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 19:08:28 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	if (ch == 0)
		return ((char *)&str[ft_strlen(str)]);
	while (*str)
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
