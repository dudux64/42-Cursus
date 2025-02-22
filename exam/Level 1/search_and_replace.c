#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return (i);
}
void search_and_replace(char *str, char *str1, char *str2)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == str1[0])
            str[i] = str2[0];
        write (1, &str[i], 1);
        i++;
    }
    write (1, "\n", 1);
}
int main(int argc, char **argv)
{
    if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1 )
    {
        write (1, "\n", 1);
        return 0;
    }
    else if (argc == 4)
        search_and_replace(argv[1],argv[2],argv[3]);
    else
        write (1, "\n", 1);
}