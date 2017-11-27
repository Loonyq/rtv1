/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 20:34:58 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/16 17:19:53 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *str1, char const *str2)
{
	if (!str1 || !str2)
		return (0);
	if (ft_strcmp(str1, str2) == 0)
		return (1);
	return (0);
}
