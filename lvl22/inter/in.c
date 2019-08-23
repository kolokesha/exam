/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 22:07:52 by malbert           #+#    #+#             */
/*   Updated: 2019/08/22 15:21:11 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_inter(char *str, char c, int index)
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

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			if(ft_inter(argv[1], argv[1][i], i) == 1)
			{
				while(argv[2][j])
				{
					if(argv[2][j] == argv[1][i])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
