#include <unistd.h>
#include <stdio.h>

char* first_word(char *str)
{
    int i;
    i = 0 ;

    while(str[i] != ' '&& str[i] != '\0')
    {
        i++;
    }
    str[i] = '\0';
    return (str);
}
int main(int argc, char **argv) {
    if (argc == 2) 
    {
        printf("%s", first_word(argv[1]));
    } else {
        printf("\n");
        return 1;
    }
    return 0;
}