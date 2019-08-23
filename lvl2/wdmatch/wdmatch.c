/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:39:21 by malbert           #+#    #+#             */
/*   Updated: 2019/08/13 20:50:40 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char const *str)
{
	int i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}
int main(int argc, char const *argv[])
{
	int i;
	int j;
	
	if(argc == 3)
	{
		i = 0;
		j = 0;
		while(argv[2][j])
			if(argv[2][j++] == argv[1][i])
				i++;
		if(!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
