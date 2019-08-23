/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:48:08 by malbert           #+#    #+#             */
/*   Updated: 2019/08/22 14:58:40 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int length;
	char tmp;

	i = 0;
	j = 0;
	while(str[length])
		length++;
	j = length - 1;
	while(i < j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i++;
		j--;
	}
	return(str);
}
int main(void)
{
	char str[] = "Helloo! world master";
	printf("%s", ft_strrev(str));
}
