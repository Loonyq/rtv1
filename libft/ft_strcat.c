/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:24:31 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 13:25:09 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *append)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst) - 1;
	j = 0;
	while (append[j] != '\0')
		dst[++i] = append[j++];
	dst[i + 1] = '\0';
	return (dst);
}
