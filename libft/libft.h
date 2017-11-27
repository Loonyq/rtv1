/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilukaino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:43:07 by ilukaino          #+#    #+#             */
/*   Updated: 2016/12/12 16:50:22 by ilukaino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memcpy(void *dst, const void *src, size_t num);
void				*ft_memccpy(void *dst, const void *src, int c, size_t num);
void				*ft_memmove(void *dst, const void *src, size_t num);
void				*ft_memset(void *dst, int val, size_t num);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *arr1, const void *arr2, size_t n);
void				ft_bzero(void *src, size_t nun);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, char *src, unsigned int n);
char				*ft_strcat(char *dst, const char *append);
char				*ft_strncat(char *dst, const char *append, size_t num);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strdup(const char *str);
char				*ft_strchr (const char *str, int ch);
char				*ft_strrchr (const char *str, int ch);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t num);
char				*ft_strstr(char *str, char *to_find);
char				*ft_strnstr(char *str, char *to_find, size_t len);
size_t				ft_strlen(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_atoi(char *str);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_putnbr(int a);
void				ft_putendl(char const *str);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putnbr_fd(int a, int fd);
void				ft_putendl_fd(char const *str, int fd);
char				*ft_strjoin(char const *str1, char const *str2);
char				*ft_strnew(size_t size);
void				ft_strclr(char *str);
void				*ft_memalloc(size_t size);
void				ft_striter(char *str, void (*f) (char *));
void				ft_striteri(char *str, void (*f) (unsigned int, char *));
char				*ft_strmap(char const *str, char (*f) (char));
char				*ft_strmapi(char const *str, char (*f)
					(unsigned int, char));
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
int					ft_strequ(char const *str1, char const *str2);
int					ft_strnequ(char const *str1, char const *str2, size_t n);
char				*ft_strsub(char const *str, unsigned int start, size_t len);
char				*ft_strtrim(char const *str);
char				**ft_strsplit(char const *str, char c);
char				*ft_itoa(long long int num);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_is_whitespace(char c);
int					ft_atoi_base(char *str, int base);
void				free_string(char ***ptr);
size_t				ft_sumofwords(char *str, char c);

#endif
