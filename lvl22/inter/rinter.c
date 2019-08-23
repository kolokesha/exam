/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rinter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:23:15 by malbert           #+#    #+#             */
/*   Updated: 2019/08/22 15:29:55 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify(char *str, char c, int index)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i])
	{
		if(verify(s1, s1[i] , i) == 1)
		{
			while(s2[j])
			{
				if(s1[i] == s2[j])
				{
					write(1, &s1, 1);
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
