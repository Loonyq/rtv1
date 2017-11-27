/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:04:54 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/16 16:10:37 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *str)
{
	char	*tmp;
	size_t	len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	while (ft_isspace(*str) && len != 0)
	{
		str++;
		len--;
	}
	len = ft_strlen(str);
	while (ft_isspace(str[len - 1]) && len != 0)
		len--;
	if (!(tmp = ft_strnew(len)))
		return (NULL);
	ft_strncpy(tmp, (char *)str, len);
	return (tmp);
}
