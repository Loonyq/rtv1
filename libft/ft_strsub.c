/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 22:02:36 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/12 16:04:14 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	if (str == NULL)
		return (NULL);
	if (!(tmp = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len && str[i])
	{
		tmp[i] = str[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
