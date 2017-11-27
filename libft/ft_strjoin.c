/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:52:40 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/12 15:21:02 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*tmp;

	if (!str1 || !str2)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen(str1) + ft_strlen(str2))))
		return (NULL);
	ft_strcpy(tmp, str1);
	ft_strcat(tmp, str2);
	return (tmp);
}
