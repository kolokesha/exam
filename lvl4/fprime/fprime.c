/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 18:13:28 by malbert           #+#    #+#             */
/*   Updated: 2019/08/21 18:39:09 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int nbr;

	i = 2;
	nbr = atoi(argv[1]);
	if (argc == 2)
	{
		if (nbr == 1)
			printf("1");
		while (nbr >= i)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break ;
				printf("*");
				nbr = nbr / i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
