/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 19:26:31 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/12 15:20:21 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f) (unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (str && f)
	{
		while (*str)
			f(i++, str++);
	}
}
