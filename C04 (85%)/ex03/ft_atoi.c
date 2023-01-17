/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 04:36:03 by keeper          #+#    #+#             */
/*   Updated: 2022/09/10 03:10:48 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 +(str[i] - '0');
		i++;
	}
	return (resultat * signe);
}
/*#include <stdio.h>
int main()
{
	char str[] = "k ----+--+1234ab567";
	printf("%d", ft_atoi(str));
}*/