/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:45:22 by malbert           #+#    #+#             */
/*   Updated: 2019/08/20 13:22:13 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nbr_inbase(char c, int base)
{
	if (base <= 10)
		return(c >= '0' && c <= '9');
	return((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
			(c >= 'a' && c <= ('a' + base - 10)));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int nbr;
	int negative;

	i = 0;
	nbr = 0;
	negative = 1;
	if(!str[0] || (str_base < 2 || str_base > 16))
		return (0);
	while(str[i] == ' ' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\t')
		i++;
	if(str[i] == '-')
		negative = -1;
	while(str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] && nbr_inbase(str[i], str_base))
		{
			if (str[i] >= 'A' && str[i] <= 'F')
				nbr = (nbr * str_base) + (str[i] - 'A' + 10);
			else if (str[i] >= 'A' && str[i] <= 'f')
				nbr = (nbr * str_base) + (str[i] - 'a' + 10);
			else
				nbr = (nbr * str_base) + (str[i] - '0');
			i++;
		}
	return(nbr * negative);
}
int main(void)
{
	const char str[] = "14df";
	int		str_base;

	str_base = 16;
	printf("%d", ft_atoi_base(str, str_base));
}
