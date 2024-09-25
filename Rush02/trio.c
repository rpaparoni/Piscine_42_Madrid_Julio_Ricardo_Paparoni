/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:01:21 by marfern3          #+#    #+#             */
/*   Updated: 2024/07/21 21:08:28 by marfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_one(char *str, char *dic, int last)
{
	char	num[2];

	num[0] = str[0];
	num[1] = '\0';
	ft_search_num(num, dic, last);
	if (last == 1)
		write (1, "\n", 1);
}

void	ft_duo_long(char *str, char *dic, int last)
{
	char	duo[3];
	
	duo[0] = str[0];
	duo[1] = '0';
	duo[2] = '\0';
	ft_search_num(duo, dic, last);
	if (last == 1 && str[1] == '0')
		write(1, "\n", 1);
	else if (last == 1)
		write(1, "  ", 1);
	if (str[1] != '0')
		ft_one(str + 1, dic, last);
}

void	ft_duo(char *str, char *dic, int last)
{
	char	duo[3];

	if (str[0] == '1')
	{
		duo[0] = str[0];
		duo[1] = str[1];
		duo[2] = '\0';
		ft_search_num(duo, dic, last);
		if (last == 1)
			write (1, "\n", 1);
	}
	else if (str[0] == '0' && str[1] == '0')
		return ;
	else if (str[0] == '0')
		ft_one(str + 1, dic, last);
	else
		ft_duo_long(str, dic, last);
}

void	ft_trio(char *str, char *dic, int last)
{
	char	num[2];

	if (str[0] == '0')
		ft_duo(str + 1, dic, last);
	else
	{
		num[0] = str[0];
		num[1] = '\0';
		ft_search_num(num, dic, last);
		if (last == 1)
			write(1, "  ", 1);
		ft_search_num("100", dic, last);
		if (last == 1 && str[1] == '0' && str[2] == '0')
		{
			write(1, "\n", 1);
			return ;
		}
		else if (last == 1)
			write(1, " ", 1);
		ft_duo(str + 1, dic, last);
	}
}
