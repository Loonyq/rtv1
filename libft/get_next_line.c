/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 12:19:25 by ilukaino          #+#    #+#             */
/*   Updated: 2017/02/23 13:58:00 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_tmp		*make_node(const int fd)
{
	static t_tmp	*start;
	t_tmp			*node;

	node = start;
	while (1)
	{
		if (node == NULL)
		{
			if (!(node = (t_tmp *)malloc(sizeof(t_tmp))))
				return (NULL);
			node->fd = fd;
			node->content = ft_strnew(0);
			node->next = start;
			start = node;
			return (node);
		}
		else if (node->fd == fd)
			return (node);
		else
			node = node->next;
	}
	return (node);
}

static int			find_line(t_tmp *node, char **line)
{
	char	*str;
	size_t	i;

	i = 0;
	if (node == NULL || node->content == NULL)
		return (0);
	while ((node->content)[i] != '\0')
	{
		if ((node->content)[i] == '\n')
		{
			*line = ft_strsub(node->content, 0, i);
			str = ((i + 1) < ft_strlen(node->content)) ?
				ft_strsub(node->content, (i + 1),
				ft_strlen(node->content) - i - 1) : ft_strnew(0);
			free(node->content);
			node->content = str;
			return (1);
		}
		i++;
	}
	return (0);
}

static int			find_buf_line(char *buf, t_tmp *node, char **line)
{
	char	*nl;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(buf);
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
		{
			nl = ft_strsub(buf, 0, i);
			*line = ft_strjoin(node->content, nl);
			free(nl);
			free(node->content);
			node->content = ((i + 1) < len) ?
						ft_strsub(buf, (i + 1), (len - 1 - i)) : ft_strnew(0);
			return (1);
		}
		i++;
	}
	nl = node->content;
	node->content = ft_strjoin(node->content, buf);
	free(nl);
	return (0);
}

static int			sweeping(t_tmp *node, char **line)
{
	size_t len;

	len = ft_strlen(node->content);
	if (len > 0)
	{
		*line = ft_strsub(node->content, 0, len);
		free(node->content);
		node->content = ft_strnew(0);
		return (1);
	}
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	t_tmp	*node;
	char	buf[BUFF_SIZE + 1];
	int		point;

	point = 1;
	if (fd < 0 || BUFF_SIZE == 0)
		return (-1);
	node = make_node(fd);
	if (find_line(node, line) == 1)
		return (1);
	while (point != 0)
	{
		ft_bzero(buf, BUFF_SIZE + 1);
		if ((point = read(node->fd, buf, BUFF_SIZE)) > -1)
		{
			if (find_buf_line(buf, node, line))
				return (1);
		}
		else
			return (-1);
	}
	return ((sweeping(node, line)) ? 1 : 0);
}
