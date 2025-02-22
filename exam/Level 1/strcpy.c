#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(int argc, char **argv)
{   
    char chr[15];
    if (argc == 2)
        ft_strcpy(chr,argv[1]);
    printf("%s\n",chr);
}