/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:26:55 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/05 18:40:55 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	int				i;

	i = -1;
	tmp1 = (unsigned char *)str1;
	tmp2 = (unsigned char *)str2;
	while (tmp1[++i] != '\0' || tmp2[i] != '\0')
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		else if (tmp1[i] == '\0' && tmp2[i] == '\0')
			return (0);
	}
	return (0);
}
