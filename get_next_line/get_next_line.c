/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:05:33 by cda-silv          #+#    #+#             */
/*   Updated: 2024/12/07 15:24:30 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *char_to_string(char c)
{
    char *str = (char *)malloc(2 * sizeof(char)); 
    if (!str) {
        return NULL;
    }
    str[0] = c;  
    return str; 
}
char	*ft_strchr(char *s, int c)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	i = 0;
	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (str[i] != chr && str[i] != 0)
		str++;
	if (str[i] == chr)
	{
		str++;
		return ((char *)&str[i]);
	}
	return (0);
}
int	line_bytes(char *s, int c)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	i = 0;
    if (s == NULL)
        	return (0);
	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (str[i] != chr && str[i] != 0)
		str++;
	if (str[i] == chr)
	{
		str++;
		return (1);
	}
	return (0);
}

char    *get_next_line(int fd) 
{
    static char *buffer;
    char temp[BUFFER_SIZE + 1];
    char *line;
	int i;
    int a;
    int bytes_read;

	i = -1;
    a = 0;
    bytes_read = 0;
    if (fd <= 0 || BUFFER_SIZE < 1)
        return NULL;
    while(0 == a)
    {
        bytes_read += read(fd, temp, BUFFER_SIZE);
	if (bytes_read == 0)
		return(buffer);
        if (buffer == NULL)
            buffer = char_to_string('\0');
        buffer = ft_strjoin(buffer,temp);
        a = line_bytes(buffer,'\n');
    }
    line = malloc(bytes_read + 1);
	while(i++ < bytes_read && buffer[i] != '\n')
		line[i]= buffer[i];
	buffer = ft_strchr(buffer,'\n');
    return (line);
}
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
    printf("%s",  line4);
    free(line2);
    free(line);
    close(fd);
    return 0;
}
