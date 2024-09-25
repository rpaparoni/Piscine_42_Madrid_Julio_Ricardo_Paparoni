/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:53:21 by marfern3          #+#    #+#             */
/*   Updated: 2024/07/21 22:01:35 by marfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "lib.h"

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	char	*dic_org;
	char	dic[20];
	int		i;
	char	*str;
	int		count;

	count = 0;
	i = 0;
	dic_org = "numbers.dict";
	if (argc == 2 || argc == 3)
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		while (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			count++;
			i++;
		}
		str = (char *)malloc((count + 1) * sizeof (char));
		if (!str)
		{
			return (1);
		}
		i = 0;
		while (i < count)
		{
			str[i] = argv[1][i];
			i++;
		}
		str[i] = '\0';
		if (argc == 3)
		{
			i = 0;
			while (argv [2][i] != '\0')
			{
				dic[i] = argv [2][i];
				i++;
			}
			dic[i] = '\0';
		}
		else if (argc == 2)
		{
			i = 0;
			while (dic_org[i] != '\0')
			{
				dic[i] = dic_org[i];
				i++;
			}
			dic[i] = '\0';
		}
		if (ft_check_dic(dic, count) == 1)
		{
			ft_numb_combination(str, dic);
			free(str);
		}
		else
		{
			free(str);
			write(1, "Dict Error\n", 11);
			return (1);
		}
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
