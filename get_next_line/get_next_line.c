/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:05:33 by cda-silv          #+#    #+#             */
/*   Updated: 2024/12/07 16:24:20 by cda-silv         ###   ########.fr       */
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
	size_t i;
    int a;
    int bytes_read;

	i = 0;
    a = 0;
    bytes_read = 0;
    if (fd <= 0 || BUFFER_SIZE < 1)
        return NULL;
    while(0 == a)
    {
        bytes_read += read(fd, temp, BUFFER_SIZE);   
        if (buffer == NULL)
            buffer = char_to_string('\0');
        buffer = ft_strjoin(buffer,temp);
        a = line_bytes(buffer,'\n');
    }
    line = malloc(ft_strlen(buffer)+ 1);
	while(i < ft_strlen(buffer) && buffer[i] != '\n')
    {
		line[i]= buffer[i];
        i++;
    }
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
    char *line5 = get_next_line(fd);
    char *line6 = get_next_line(fd);
    char *line7 = get_next_line(fd);
    char *line8 = get_next_line(fd);
    char *line9 = get_next_line(fd);
    char *line10 = get_next_line(fd);
    char *line11 = get_next_line(fd);
    char *line12 = get_next_line(fd);
    printf("%s\n", line);
    printf("%s\n", line2);
    printf("%s\n", line3);
    printf("%s\n", line4);
    printf("%s\n", line5);
    printf("%s\n", line6);
    printf("%s\n", line7);
    printf("%s\n", line8);
    printf("%s\n", line9);
    printf("%s\n", line10);
    printf("%s\n", line11);
    printf("%s\n", line12);
    free(line);
    free(line2);
    free(line3);
    free(line4);
    free(line5);
    free(line6);
    free(line7);
    free(line8);
    free(line9);
    free(line10);
    free(line11);
    free(line12);
    close(fd);
    return 0;
}

