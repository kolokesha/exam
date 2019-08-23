/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:40:00 by malbert           #+#    #+#             */
/*   Updated: 2019/08/20 17:12:24 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int d;

	if (!a || !b)
		return (0);
	if (a > b)
		d = (a / 2) + 1;
	else 
		d = (b / 2) + 1;
	while(!((a % d == 0) && (b % d == 0)))
		d--;
	return (a * b / d);
}
int main(void)
{
	unsigned int a;
	unsigned int b;

	a = 42;
	b = 12;
	printf("%d", lcm(a, b));
}
