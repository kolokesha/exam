/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addprime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:29:39 by malbert           #+#    #+#             */
/*   Updated: 2019/08/13 22:04:34 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int nb;
	int negative;

	i = 0;
	nb = 0;
	negative = 1;
	while(str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		   	|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '\0')
		return (0);
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (*str && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * negative);
}
void ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		nb = -nb;
		write(1, &c, 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
int	is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}
int main(int argc, char *argv[])
{
	int nb;
	int sum;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		sum = 0;
		while (nb > 0)
			if (is_prime(nb--))
				sum = sum + (nb + 1);
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
