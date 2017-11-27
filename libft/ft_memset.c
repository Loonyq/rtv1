/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:22:59 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 19:24:07 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, size_t num)
{
	unsigned char	*tmpd;
	size_t			i;

	i = 0;
	tmpd = (unsigned char *)dst;
	while (i < num)
	{
		tmpd[i] = val;
		i++;
	}
	return (dst);
}
