/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:23:01 by malbert           #+#    #+#             */
/*   Updated: 2019/08/20 20:37:17 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int p)
{
	char *str;

	str = "0123456789abcdef";
		int	i;
	if (p == 0)
		write(1, "0", 1);
	while (p)
	{
		write(1, &str[p % 16], 1);
		p = p / 16;
	}
}
int ft_atoi(char *str)
{
	int i;
	int negative;
	int nbr;

	i = 0;
	negative = 1;
	nbr = 0;
	if (!str[i])
		return (0);
	while(str[i] == ' ' || str[i] == '\v' || str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		negative = -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * negative);
}
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
		hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}




