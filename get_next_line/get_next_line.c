/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:05:33 by cda-silv          #+#    #+#             */
/*   Updated: 2024/12/11 21:41:56 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*next_line_backup(char *c)
{
	char	*backup;
	char	*line;

	if (*c == '\0' || c == NULL)
		return (NULL);
	line = ft_strchr(c, '\n');
	if (!line)
		return (NULL);
	backup = ft_strdup(line + 1);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	return (backup);
}
char *read_line(int fd, char *buffer, char *backup)
{
    int     bytes_read;

    bytes_read = 1;
    while (bytes_read > 0)
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read < 0)
        {
            free(buffer);
            return NULL;
        }
        else if (bytes_read == 0)
            break;
        buffer[bytes_read] = '\0';
        if (backup == NULL)
            backup = ft_strdup("");
        backup = ft_strjoin(backup, buffer);
        if (ft_strchr(backup, '\n'))
            break;
    }
    free(buffer);
    return (backup);
}
char *return_line(char *str)
{
    if (str == NULL)
        return NULL;
    char *ptr;

    ptr = str;
    while (*ptr)
    {
        if (*ptr == '\n') 
        {
            *ptr = '\0';
            break;
        }
        ptr++;
    }
    return (str);
}
char *get_next_line(int fd) 
{
    static char     *temp;
    char            *line;
    char            *buffer;

    if (fd <= 0 || BUFFER_SIZE < 1)
        return NULL;
    buffer = (char *)malloc(sizeof (char *) * (BUFFER_SIZE + 1));
    if (!buffer)
        return NULL;
    line = read_line(fd, buffer, temp);
    if (line == NULL)
    {
        free(temp);
        temp = NULL;
        return NULL;
    }
    temp = next_line_backup(line);
    return (return_line(line));
}

/*
#include <fcntl.h>
int main() 
{
    const char *filePath = "exemplo.txt";
    int fd = open(filePath, O_RDONLY);
    char *line = get_next_line(fd);
    char *line2 = get_next_line(fd);
    char *line3 = get_next_line(fd);
    char *line4 = get_next_line(fd);
    printf("%s\n", line);
    printf("%s\n", line2);
    printf("%s\n", line3);
    printf("%s\n", line4);
    free(line);
    free(line2);
    free(line3);
    free(line4);

    close(fd);
    return 0;
}
*/

