/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:30:51 by lrorscha          #+#    #+#             */
/*   Updated: 2019/08/18 19:43:23 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FUNC(name) strcmp(src, name) == 0
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stddef.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memcpy(void *restrict dst, const void *restrict src,
		size_t count);
int					ft_functests(char *src);
char				*ft_strncpy(char *dst, const char *src, size_t count);
char				*ft_strcat(char *dst, const char *src);
void				*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t count);
void				*ft_memset(void *src, int c, size_t count);
void				ft_bzero(void *src, size_t count);
void				*ft_memchr(const void *str, int c, size_t count);
size_t				ft_strlen(const char *str);
void				*ft_memmove(void *dst, const void *src, size_t count);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *str);
void				ft_putchar(char c);
char				*ft_strncat(char *restrict dst, const char *restrict src,
		size_t size);
size_t				ft_strlcat(char *restrict dst, const char *restrict src,
		size_t size);
char				*ft_strchr(const char *src, int c);
char				*ft_strrchr(const char *src, int c);
char				*ft_strstr(const char *src, const char *st);
char				*ft_strnstr(const char *src, const char *st, size_t size);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t size);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_strclr(char *s);
void				*ft_memalloc(size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t size);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void(*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
char				*ft_str_initialized(size_t size, char c);
#endif
