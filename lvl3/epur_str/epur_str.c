/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 22:04:54 by malbert           #+#    #+#             */
/*   Updated: 2019/08/13 22:21:35 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int flag;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ')
			i++;
		while(argv[1][i])
		{
			if(argv[1][i] == ' ')
				flag = 1;
			if(!(argv[1][i] == ' '))
			{
				if (flag != 0)
					write(1, " ", 1);
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
