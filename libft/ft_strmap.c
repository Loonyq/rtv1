/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 20:11:49 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/12 15:25:28 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f) (char))
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
		tmp[i] = f(str[i]);
		i++;
	}
	return (tmp);
}
