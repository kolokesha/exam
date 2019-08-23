/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:28:46 by malbert           #+#    #+#             */
/*   Updated: 2019/08/15 18:14:26 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int len;
	char tmp;

	len = 0;
	i = 0;
	while(str[len] != '\0')
		len++;
	j = len - 1;
	while(i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return(str);
}
int main(void)
{
	char str[] = "Hello";
	printf("%s", ft_strrev(str));
}
