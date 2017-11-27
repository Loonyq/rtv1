/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:47:07 by ilukaino          #+#    #+#             */
/*   Updated: 2017/08/16 15:39:52 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_sumofwords(char *str, char c)
{
	int		i;
	size_t	sum;

	i = -1;
	sum = 0;
	while (str[++i] != '\0')
		if ((str[i] != c && str[i + 1] == c) || str[i + 1] == '\0')
			sum++;
	return (sum);
}

static char		**ft_creat_buff(char **tmp, char const *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	wordsize;

	i = 0;
	j = 0;
	wordsize = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			wordsize++;
			if ((str[i + 1] == c || str[i + 1] == '\0') && wordsize)
			{
				tmp[j] = ft_strsub(str, i - wordsize + 1, wordsize);
				j++;
				wordsize = 0;
			}
		}
		i++;
	}
	tmp[j] = NULL;
	return (tmp);
}

char			**ft_strsplit(char const *str, char c)
{
	char		**tmp;
	size_t		sum;

	if (!str || !c)
		return (NULL);
	sum = ft_sumofwords((char *)str, c);
	if (!(tmp = (char **)malloc(sizeof(char *) * (sum + 1))))
		return (NULL);
	ft_creat_buff(tmp, str, c);
	return (tmp);
}
