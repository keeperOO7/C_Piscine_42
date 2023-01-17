/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:35:42 by keeper          #+#    #+#             */
/*   Updated: 2022/09/12 12:30:50 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
}*/
