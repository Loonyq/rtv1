/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:14:04 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 19:25:20 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*tmpd;
	unsigned char	*tmps;

	i = 0;
	tmpd = (unsigned char *)dst;
	tmps = (unsigned char *)src;
	while (i < num)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return (dst);
}
