/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:16:02 by malbert           #+#    #+#             */
/*   Updated: 2019/08/18 17:07:14 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isblank(char c)
{
	if(c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		while(*argv[1])
			argv[1]++;
		argv[1]--;
		while(ft_isblank(*argv[1]))
			argv[1]--;
		while(*argv[1] && !ft_isblank(*argv[1]))
			argv[1]--;
		argv[1]++;
		while(*argv[1] && !ft_isblank(*argv[1]))
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return(0);
}
