#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i;
	int posi;

	i = 0;
    if (!str)
    {
        write(1, "\n", 1);
    }
	while (str[i])
	{
		posi = str[i];
		if (str[i] >= 97 && str[i] <= 122)
		{
			posi -= 96;
			while (posi != 0)
			{
				write(1, &str[i], 1);
				posi--;
			}
		}
		i++;
	}
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        repeat_alpha(argv[1]);
    }
    else
        write(1, "\n", 1);
}