/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 02:43:36 by keeper          #+#    #+#             */
/*   Updated: 2022/09/04 19:31:54 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	index;

	i = 0;
	index = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
		index = index - 1;
	}
}

/*int	main()
{
	int	t[] = {7, 6, 5, 4, 3, 2, 1};
	int	i;

	i = 0;
	ft_rev_int_tab(t, 7);

	while (i < 7)
	{
		printf("%d", t[i]);
		i++;
	}
	return (0);
}*/
