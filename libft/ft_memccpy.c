/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:17:03 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 19:23:27 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t num)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;
	size_t			i;

	i = 0;
	tmpd = (unsigned char *)dst;
	tmps = (unsigned char *)src;
	while (i < num)
	{
		tmpd[i] = tmps[i];
		if ((unsigned char)c == tmpd[i])
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
