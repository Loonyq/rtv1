/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 12:21:19 by ilukaino          #+#    #+#             */
/*   Updated: 2017/02/23 12:21:20 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft.h"
# define BUFF_SIZE 1024

typedef struct		s_tmp
{
	char			*content;
	int				fd;
	struct s_tmp	*next;
}					t_tmp;

int					get_next_line(const int fd, char **line);

#endif
