#include <unistd.h>

void putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(int argc, char **argv)
{
    if (argc == 2)
        putstr(argv[1]);
}