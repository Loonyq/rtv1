/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:33:32 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 17:42:15 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *append, size_t num)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	j = 0;
	while (append[j] != '\0' && j < num)
		dst[i++] = append[j++];
	dst[i] = '\0';
	return (dst);
}
