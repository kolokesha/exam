/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   un.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 22:56:28 by malbert           #+#    #+#             */
/*   Updated: 2019/08/21 23:07:30 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verify(char *str, char c, int index)
{
	int i;

	i = 0;
	while(i < index)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void		unior(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s2[i])
	{
		if(verify(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	j = i;
	while(s2[i])
	{
		if (verify(s2, s2[i], i) == 1)
		{
			if (verify(s1, s2[i], j) == 1)
					write(1, &s2[i], 1);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		unior(argv[1], argv[2]);
	write(1, "\n", 1);
}

