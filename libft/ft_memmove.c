/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:20:23 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 19:26:31 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;
	size_t			i;

	i = 0;
	tmpd = (unsigned char *)dst;
	tmps = (unsigned char *)src;
	if (dst < src)
	{
		while (i < num)
		{
			tmpd[i] = tmps[i];
			i++;
		}
	}
	else
	{
		while (i < num)
		{
			tmpd[num - i - 1] = tmps[num - i - 1];
			i++;
		}
	}
	return (dst);
}
