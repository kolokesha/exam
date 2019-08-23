/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 22:01:02 by malbert           #+#    #+#             */
/*   Updated: 2019/08/21 22:05:09 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_stdup(char *src)
{
	int i;
	int j;
	int length;
	char *str

	i = 0;
	j = 0;
	length = 0;
	while(str[length])
		length++;
	str = malloc(sizeof(char) * length + 1));
	if (str == NULL)
		return(NULL);
	while(src[i])
	{
		str[i] = src[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

