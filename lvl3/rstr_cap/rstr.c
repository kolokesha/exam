/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:38:01 by malbert           #+#    #+#             */
/*   Updated: 2019/08/20 21:24:17 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i]<= 'Z')
			str[i] = str[i] + 32;
		if(str[i] >= 'a' && str[i] <= 'z' 
				&& (str[i + 1] == ' ' || str[i] == '\0'))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	int i;
	if (argc < 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			rstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return(0);
}

