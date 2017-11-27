/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:34:54 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 18:43:32 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char *)str1;
	tmp2 = (unsigned char *)str2;
	while ((tmp1[i] == tmp2[i]) && (i < num))
	{
		if (tmp2[i++] == '\0')
			return (0);
	}
	if (i == num)
		return (0);
	return (tmp1[i] - tmp2[i]);
}
