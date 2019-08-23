/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:32:56 by malbert           #+#    #+#             */
/*   Updated: 2019/08/15 15:46:33 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int negative;

	i = 0;
	res = 0;
	negative = 1;
	while(str[i])
	{
		while(str[i] == ' ' || str[i] == '\v' || str[i] == '\f' ||
				str[i] == '\n' || str[i] == '\r')
			i++;
		if(str[i] == '-')
			negative = -1;
		if(str[i] == '+' || str[i] == '-')
			i++;
		while(str[i] >= '0' && str[i] <= '9')
		{
			res = (res * 10) + (str[i] - '0');
			i++;
		}
	}
	return(res * negative);
}
int main(void)
{
	char str[] = "-1";
	printf("%d", ft_atoi(str));
}
