/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:16:08 by malbert           #+#    #+#             */
/*   Updated: 2019/08/20 19:22:46 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	int b;

	if(argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if(a > 0 && b > 0)
		{
			while(a != b)
			{
				if (a > b)
					a -= b;
				else
					b -= a;
			}
			printf("%d", a);
		}
	}
}
