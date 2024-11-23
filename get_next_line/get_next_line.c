/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:05:33 by cda-silv          #+#    #+#             */
/*   Updated: 2024/11/22 20:39:04 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>  // Para open()
#include <unistd.h>

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
char *get_next_line(int fd) {
    static char buffer[BUFFER_SIZE + 1];
    char *line;
    ssize_t bytes_read;
	int i;
	char *a;

	i = -1;
    if (fd < 0 || BUFFER_SIZE < 1)
        return NULL;

    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read <= 0)
        return NULL;
    line = malloc(bytes_read + 1);
	while(i++ < bytes_read && buffer[i] != '\n')
		line[i]= buffer[i];
	a = ft_strchr(buffer,'\n');
	printf("%s",a);
    return line;

}

int main() 
{
    const char *filePath = "exemplo.txt";
    int fd = open(filePath, O_RDONLY);
    if (fd == -1) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    char *line = get_next_line(fd);
    while (line) {
        printf("%s\n", line);
        free(line);
        line = get_next_line(fd);
    }
    close(fd);
    return 0;
}
