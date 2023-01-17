/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:36:21 by keeper          #+#    #+#             */
/*   Updated: 2022/09/12 12:31:18 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	div_2;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb % i == 0 || nb < 2)
		return (0);
	i = 3;
	div_2 = nb / 2;
	while (i <= div_2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_is_prime(2));
}*/
