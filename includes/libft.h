/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:10:16 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/08 15:39:55 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
#	include <string.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_swap(int *a, int *b);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putendl(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
char	*ft_strnew(size_t n);
void ft_strdel(char **as);
void	ft_striteri(char *str, void (*f)(unsigned int, char *));
void	ft_striter(char *str, void (*f)(char *));
void	ft_strclr(char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t	size);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *src);
int	ft_strnequ(char const *s1, char const *s2, size_t i);
int	ft_strequ(char const *s1, char const *s2);
char	*ft_strncat(char *dest, char *src, int nb);
char	*ft_strncpy(char *dst, const char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strnstr(char *haystack, char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strmap(char const *str, char (*f)(char));
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strsub(char const *str, unsigned int start, size_t n);
char	*ft_strtrim(char const *str);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memalloc(size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void* dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strrchr(const char *s, int c);

#endif
