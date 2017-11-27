/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:54:05 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/16 18:49:39 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_int(long long int num)
{
	size_t counter;

	counter = 0;
	if (num <= 0)
		counter++;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

char			*ft_itoa(long long int num)
{
	char	*str;
	char	sign;
	size_t	i;

	sign = num >= 0 ? 0 : 1;
	if (!(str = ft_strnew(ft_count_int(num))))
		return (NULL);
	i = ft_count_int(num);
	if (num == 0)
		str[--i] = '0';
	while (num != 0)
	{
		if (num > 0)
			str[--i] = num % 10 + '0';
		else if (num < 0)
			str[--i] = '0' - (num % 10);
		num /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
