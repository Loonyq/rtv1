/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 20:15:03 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/12 15:26:08 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f) (unsigned int, char))
{
	size_t	i;
	char	*tmp;

	if (!str || !f)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen(str))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		tmp[i] = f(i, str[i]);
		i++;
	}
	return (tmp);
}
