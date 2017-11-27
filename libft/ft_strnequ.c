/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 21:43:21 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/06 21:43:24 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *str1, char const *str2, size_t n)
{
	if (!str1 || !str2)
		return (0);
	if (ft_strncmp(str1, str2, n) == 0)
		return (1);
	return (0);
}
