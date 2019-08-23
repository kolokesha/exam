/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:38:15 by malbert           #+#    #+#             */
/*   Updated: 2019/08/18 16:51:22 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_line(char *s1, char c, int index)
{
	int i;

	i = 0;
	while(i < index)
	{
		if(s1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int length1;

	i = 0;
	length1 = 0;
	while(s1[i])
	{
		if(check_line(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	length1 = i;
	i = 0;
	while (s2[i])
	{
		if(check_line(s2, s2[i], i) == 1)
		{
			if(check_line(s1, s2[i], length1) == 1)
				write(1, &s2[i], 1);
		}
		i++;
	}
}


int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
