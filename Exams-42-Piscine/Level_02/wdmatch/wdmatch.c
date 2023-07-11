#include <unistd.h>

void	ft_putstr(char const *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main (int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	char *str1 = av[1];
	char *str2 =av[2];
	
	while (str2[j])
		if (str2[j++] == str1[i])
			i += 1;
	if (!str1[i])
		ft_putstr(str1);
}
