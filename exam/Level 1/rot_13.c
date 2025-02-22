#include <unistd.h>

void rot_13(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = 'a' + (str[i] - 'a' + 13) % 26 ;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 13;
            if (str[i] > 'Z')
                str[i] -= 26;
        }
        write (1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
int main(int argc,char **argv)
{
    if (argc == 2)
    {
        rot_13(argv[1]);
    }
    else
    write(1, "\n", 1);
}