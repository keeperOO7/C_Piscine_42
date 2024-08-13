#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        int printed[256] = {0};

        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[2][j] == av[1][i] && printed[(int)av[1][i]] == 0)
                {
                    write(1, &av[1][i], 1);
                    printed[(int)av[1][i]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
