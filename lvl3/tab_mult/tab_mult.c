/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 17:43:12 by malbert           #+#    #+#             */
/*   Updated: 2019/08/21 18:02:02 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int negative;
	int nbr;

	i = 0;
	nbr = 0;
	negative = 1;
	while(str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == ' '
			|| str[i] == '\f' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		negative = -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * negative);
}

void	 ft_putnbr(int nbr)
{
	char p;
	
	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if(nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr( nbr % 10);
	}
	if(nbr < 10)
	{
		nbr = nbr + '0';
		write(1, &nbr, 1);
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc < 2)
		write(1, "\n", 1);
	else
	{
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(ft_atoi(argv[1]));
			write(1, " = ", 3);
			ft_putnbr(i * ft_atoi(argv[1]));
			write(1, "\n", 1);
			i++;
		}
	}
}






