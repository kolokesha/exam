/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:38:34 by malbert           #+#    #+#             */
/*   Updated: 2019/08/20 14:45:25 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*str;
	int i;

	i = 0;
	if(start > end)
		str = (int*)malloc(sizeof(int) * (start - end));
	else
		str = (int*)malloc(sizeof(int) * (end - start));
	while(end != start)
	{
		str[i] = end;
		if (start > end)
			end++;
		else
			end--;
		i++;
	}
	str[i] = end;
	return(str);
}
int main(void)
{
	int start;
	int end;

	start = 1;
	end = 5;

	printf("%d", *ft_rrange(start, end));
}
