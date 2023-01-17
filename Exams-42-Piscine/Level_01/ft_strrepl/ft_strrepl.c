#include <unistd.h>

void	ft_strrepl(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			write(1, &b, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
//     --> Testing <--      //
/*
        int main()
        {
            ft_strrepl("wNcOre Un ExEmPle Pas Facilw a Ecrirw ", 'w', 'e');
        }

//     --> Output <--      //

        $>./a.out | cat -e       
        eNcOre Un ExEmPle Pas Facile a Ecrire $
*/