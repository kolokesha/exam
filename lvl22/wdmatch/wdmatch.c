/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:17:57 by malbert           #+#    #+#             */
/*   Updated: 2019/08/15 21:29:23 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while(argv[2][j])
		{
			if(argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if(argv[1][i] == '\0')
			putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
