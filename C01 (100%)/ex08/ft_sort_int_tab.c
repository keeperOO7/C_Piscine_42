/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 02:47:30 by keeper          #+#    #+#             */
/*   Updated: 2022/09/04 19:32:22 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swp;
			i = 0;
		}
		else
			i++;
	}
}

/*int	main()
{
	int tab[] = {-362, -247, -6, -51, -38, 183, 98, 20, 30, 28, 37, 1, 0};
	int i = 0;

	ft_sort_int_tab(tab, 12);
	while (i != 12)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}*/
