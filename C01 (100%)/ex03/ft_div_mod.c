/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:50:30 by keeper          #+#    #+#             */
/*   Updated: 2022/08/30 18:14:27 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int i = 50;
	int j = 2;

	int x, y;

	ft_div_mod(i, j, &x, &y);
	printf("%d\n%d", x, y);
}*/