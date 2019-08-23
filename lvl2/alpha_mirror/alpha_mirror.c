/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:48:32 by malbert           #+#    #+#             */
/*   Updated: 2019/08/12 17:55:31 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main( int argc, char **argv)
{
	int i;
	int ltr;

	i = 0;
	ltr = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ltr = 'z' - argv[1][i] + 'a';   	
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ltr = 'Z' - argv[1][i] + 'A';
			write(1, &ltr, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
