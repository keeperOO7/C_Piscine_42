/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:14:20 by keeper          #+#    #+#             */
/*   Updated: 2022/09/13 17:20:48 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(char **tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (tab[i][j])
			write(1, &tab[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < ac)
	{
		j = i;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0 && i != j)
			{
				swap = av[i];
				av[i] = av[j];
				av[j] = swap;
			}
			j++;
		}
		i++;
	}
	ft_print(av, ac);
	return (0);
}
