/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keeper <keeper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:59:31 by keeper          #+#    #+#             */
/*   Updated: 2022/09/08 04:26:29 by keeper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	len_dest = i;
	len_src = ft_strlen(src);
	if (size == 0 || size <= i)
		return (size + len_src);
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len_src + len_dest);
}

/*int main()
{
	char tab[33] = "Born to code ";
	char src[] = "1337 42";
	printf("%d\n", ft_strlcat(tab, src, 20));
	printf("%s", tab);
}*/