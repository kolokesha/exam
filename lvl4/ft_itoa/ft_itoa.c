/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 18:47:02 by malbert           #+#    #+#             */
/*   Updated: 2019/08/21 19:27:49 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	int len;
	char *str;
	int n;

	if (nbr == -2147483648)
		return ("-2147483648");
	len = 0;
	n = nbr;
	while(n)
	{
		n = n / 10;
		len += 1;
	}
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	if (str == 0)
		printf("0");
	str[len] = '\0';
	while (nbr)
	{
		str[len--] = (n % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
int main(void)
{
	int i;
	int nbr[5] = {-2147483648, -42, 0, 42, 214748364};

	i = 0;
	while (i < 5)
		printf("%s\n", ft_itoa(nbr[i++]));
}
