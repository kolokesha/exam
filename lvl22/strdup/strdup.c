/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:57:38 by malbert           #+#    #+#             */
/*   Updated: 2019/08/15 17:28:12 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		length;
			
	i = 0;
	length = 0;
	while (src[length])
		length++;
	str = (char*)malloc(sizeof(*str) * (length + 1));
	if (!src)
		return (0);
	while (i < length)
	{
		str[i] = src[i];
			i++;
	}
	str[i] = '\0';
	return (str);
}
int main (void)
{
	char src[] = "";
	ft_strdup(src);
}

