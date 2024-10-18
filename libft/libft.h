/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:08:53 by cda-silv          #+#    #+#             */
/*   Updated: 2024/10/17 21:20:57 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stdlib.h>
# include<unistd.h>
int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t len);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src,size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t count);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *c);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int ch);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);
char    *ft_substr(char const *s, unsigned int start, size_t len);
void ft_striteri(char *s, void (*f)(unsigned int,char*));
#endif
