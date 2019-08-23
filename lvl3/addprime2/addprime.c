/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addprime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:39:17 by malbert           #+#    #+#             */
/*   Updated: 2019/08/15 22:42:33 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	atoi(char *str)
{
	int i;
	int negativ;
	int nbr;

	i = 0;
	negativ = 1;
	nbr = 0;
	while(str[i])
	{
		while(str[i] == ' ' || str[i] == '\r' || str[i] == '\v'
			   	|| str[i] == '\n' || str[i] == '\f')
			i++;
		if(str[i] == '-')
			negativ = -1;
		if(str[i] == '-' || str[i] == '+')
			i++;
		while(str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * 10 + (str[i] - '0');
			i++;
		}
	}
	return(negativ * nbr);
}

int isprime(int numb)
{
	if (numb <= 1)
		return (0);
	unsigned int i;
	i = 2;
	while(i*i <= numb)
	{
		if(numb % i == 0)
			return (0);
		i++;
	}
	return(1);
}

int putnbr(int sum)
{
	char c;

	if(sum < 0)
	{
		write(1, "-", 1);
		sum = -sum;
	}
	if(sum < 10)
	{
		c = sum + '0';
		write(1, &c, 1);
	}
	else
	{
		putnbr(sum / 10);
		putnbr(sum % 10);
	}
	return(sum);
}

int main(int argc, char **argv)
{
	int numb;
	int sum;

	sum = 0;
	if(argc == 2 && atoi(argv[1]) > 0)
	{
		numb = atoi(argv[1]);
		while(numb > 0)
		{
			if(isprime(numb))
				sum = sum + numb;
			numb--;
		}
		putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
