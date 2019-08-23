/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:55:57 by malbert           #+#    #+#             */
/*   Updated: 2019/08/22 14:00:34 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(argv[2][0] == '+')
		{
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
			printf("\n");
		}
	}
	return (0);
}
