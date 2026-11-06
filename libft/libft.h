/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <ezararsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:25:50 by ezararsi          #+#    #+#             */
/*   Updated: 2023/10/04 16:13:24 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 21
# endif
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>


typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}				t_list;

char	*get_next_line(int fd);
void	line_len(char	**line, t_list *stash);
int	newline(t_list *stash);
void	add_to_stash(t_list **stash, char *buf, int readnum);
t_list	*ft_lst_get_last(t_list *stash);
int	sl(const char *str);
void	free_stash(t_list *stash);


void				ft_bzero(void *str, size_t n);
void				*ft_calloc(size_t n, size_t size);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *str, int value, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *src);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strnstr(const char *str, const char *find, size_t n);
char				*ft_strrchr(const char *str, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
long				ft_atoi(const char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
int					ft_strncmp(char *s1, char *s2, size_t n);
int					ft_strlen(const char *str);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *src, char *dest);
char	*ft_strncat(char *dest, const char *src, size_t n);

#endif
