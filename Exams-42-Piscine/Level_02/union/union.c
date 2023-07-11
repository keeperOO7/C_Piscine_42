#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int hash[256] = {0};

    if (ac == 3)
    {
        while (av[1][i])
        {
            if (hash[av[1][i]] == 0)
            {
                write(1, &av[1][i], 1);
                hash[av[1][i]] = 1;
            }
            i++;
        }
        while (av[2][j])
        {
            if (hash[av[2][j]] == 0)
            {
                write(1, &av[2][j], 1);
                hash[av[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
}
