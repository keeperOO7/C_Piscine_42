/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:48:59 by keeper          #+#    #+#             */
/*   Updated: 2022/08/28 20:27:21 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)

{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1 ;
	}
	a = nb;
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
	{
		a = a + 48;
		write(1, &a, 1);
	}
}
/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/
