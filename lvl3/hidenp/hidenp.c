/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:45:47 by malbert           #+#    #+#             */
/*   Updated: 2019/08/20 16:39:43 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while(*s2 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char str_hidenp[4096];

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while(argv[2][j])
		{
			if(argv[1][i] == argv[2][j])
			{
				str_hidenp[i] = argv[1][i];
				i++;
			}
			j++;
		}
		if(!ft_strcmp(argv[1], str_hidenp))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

