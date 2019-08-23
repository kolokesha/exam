/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:07:47 by malbert           #+#    #+#             */
/*   Updated: 2019/08/18 16:16:39 by malbert          ###   ########.fr       */
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

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check_line(s1, s1[i], i) == 1)
		{
			while(s2[j])
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i], 1);

					break ;
				}
				j++;
			}
		}
		i++;
	}
}


int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
