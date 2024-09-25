/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combination.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:35:09 by marfern3          #+#    #+#             */
/*   Updated: 2024/07/21 23:29:07 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int ft_check_rest_zeroes(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '0' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return(1);
	return (0);
}

void	ft_zeroes_power(int len, char *str, char *dic, int last)
{
	int		j;
	char	*power;

	power = (char *)malloc((len + 1) * sizeof(char));
	j = 1;
	power[0] = '1';
	while (j <= len)
	{
		power[j] = '0';
		j++;
	}
	power [j] = '\0';
	if (ft_check_rest_zeroes(str) == 1)
	{
		last = 1;
		ft_search_num(power, dic, last);
		write(1, "\n", 1);
	}
	else 
		ft_search_num(power, dic, last);
	free(power);
}

void	ft_rest_combi(int len, char *dic, char *str, int last)
{
	char	num[4];
	int	i;
	
	if (len % 3 == 0)
		i = 3;
	else
		i = len % 3;
	while (i < len && str[i] != '\0')
	{
		num[0] = str[i];
		num[1] = str[i + 1];
		num[2] = str[i + 2];
		num[3] = '\0';
		i = i + 3;
		if (!(num[0] == '0' && num[1] == '0' && num[2] == '0'))
		{
			if (i == len)
				last = 1;
			ft_trio(num, dic, last);
			if (i < len)
				ft_zeroes_power(len - i, dic, (str+ i), last);
		}
	}
}

void	ft_numb_combination(char *str, char *dic)
{
	int		len;
	int		i;
	int		last;

	last = 0;
	len = ft_str_len(str);
	i = len % 3;
	if (len / 3 == 0 || (len / 3 == 1 && len % 3 == 0))
		last = 1;
	if (len % 3 == 0)
		{
			ft_trio(str, dic, last);
			i = 3;
		}
	else if (len % 3 == 1)
		ft_one(str, dic, last);
	else if (len % 3 == 2)
		ft_duo(str, dic, last);
	if (len / 3 == 0 || (len / 3 == 1 && len % 3 == 0))
		return ;
	else
		ft_zeroes_power(len - i, dic, (str + i), last);
	ft_rest_combi(len, dic, str, last);
	return ;
}
