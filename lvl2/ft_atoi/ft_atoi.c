/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:53:13 by malbert           #+#    #+#             */
/*   Updated: 2019/08/13 20:04:18 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
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
	if( str[i] == '-' || str[i] == '+')
		i++;
	while(*str && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * negative);
}
int main(void)
{
	char str[] = "-42";
	printf("%d", ft_atoi(str));
}
