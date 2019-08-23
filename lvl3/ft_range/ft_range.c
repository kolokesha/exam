/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:29:06 by malbert           #+#    #+#             */
/*   Updated: 2019/08/20 14:38:16 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int *str;
	int i;

	i = 0;
	if(start > end)
		str = (int *)malloc(sizeof(int) * (start - end));
	else
		str = (int *)malloc(sizeof(int) * (end - start));
	while(start != end)
	{
		str[i++] = start;
		if (start > end)
			start--;
		else if (start < end)
			start++;
	}
	str[i] = start;
	return (str);
}
int main(void)
{
	int start;
	int end;

	start = 1;
	end = 5;
	printf("%d", *ft_range(start, end));
}
