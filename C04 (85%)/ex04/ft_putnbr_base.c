/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 04:35:52 by keeper          #+#    #+#             */
/*   Updated: 2022/09/10 03:11:12 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_to_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[i + j])
		{
			j++;
			if (base[i] == base[i + j])
				return (0);
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb, unsigned int base_nb, char *base)
{
	unsigned int	g;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	g = nb;
	if (g >= base_nb)
	{
		ft_putnbr(g / base_nb, base_nb, base);
		ft_putnbr(g % base_nb, base_nb, base);
	}
	else
	{
		write(1, &base[g], 1);
	}	
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	h;

	h = ft_to_base(base);
	if (h > 1)
		ft_putnbr(nbr, h, base);
}
