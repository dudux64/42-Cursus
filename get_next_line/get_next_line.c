/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:05:33 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/23 15:10:05 by cda-silv         ###   ########.fr       */
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
char    *get_next_line(int fd) 
{
    static char *buffer;
    char temp[BUFFER_SIZE + 1];
    char *line;
	int i;
	i = -1;
    if (fd < 0 || BUFFER_SIZE < 1)
        return NULL;
    read(fd, temp, BUFFER_SIZE);
    temp[BUFFER_SIZE + 1] = '\0'; 
    line = malloc(BUFFER_SIZE + 1);
    if (buffer == NULL)
        buffer = char_to_string('\0');
    line = ft_strjoin(buffer,temp);
	while(i++ < BUFFER_SIZE && temp[i] != '\n')
		line[i]= temp[i];
	buffer = ft_strchr(temp,'\n');
    return line;
}

#include <fcntl.h>
int main() 
{
    const char *filePath = "exemplo.txt";
    int fd = open(filePath, O_RDONLY);
    char *line = get_next_line(fd);
    printf("%s", line);
    free(line);
    close(fd);
    return 0;
}
