/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:08:06 by malbert           #+#    #+#             */
/*   Updated: 2019/08/13 20:24:25 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fn_word(char *str, int *i)
{
	while (str[*i] != ' ' && str[*i] != '\t' && str[*i])
		(*i) = (*i) + 1;
}
void	print_word(char *str, int start, int end)
{
	int i;
	int c;

	i = start;
