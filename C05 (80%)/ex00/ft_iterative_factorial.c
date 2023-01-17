/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:35:36 by keeper          #+#    #+#             */
/*   Updated: 2022/09/11 05:01:10 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	f = nb;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/
