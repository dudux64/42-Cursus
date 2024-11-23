/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:57:35 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/23 14:21:26 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h> 
# include <fcntl.h> 
# include <stdio.h>   

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char    *get_next_line(int fd);
size_t  ft_strlen(const char *c);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strchr(char *s, int c);

#endif