/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:28:16 by malbert           #+#    #+#             */
/*   Updated: 2019/08/22 15:20:46 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	int length;
	char *str;

	i = 0;
	if (!src || (!(str == (char*)malloc(sizeof(str) * (length + 1)))))
		return(NULL);
	while(src[length])
		length++;
	while(i < length)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char src[0];
	printf("%s", ft_strdup(src));
}
