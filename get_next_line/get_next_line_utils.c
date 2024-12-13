/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:53:27 by cda-silv          #+#    #+#             */
/*   Updated: 2024/12/13 20:07:56 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
    size_t	i;

    if (!c)
        return (0);
    i = 0;
    while (c[i] != '\0')
        i++;
    return (i);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
char	*ft_strdup(char *s)
{
	int		i;
	char	*line;

	i = 0;
	line = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (line == NULL)
		return (NULL);
	while (s[i])
	{
		line[i] = s[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	line = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!line)
		return (NULL);
	while (s1[i])
	{
		line[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		line[i] = s2[j];
		j++;
		i++;
	}
	line[i] = '\0';
	free(s1);
	return (line);
}