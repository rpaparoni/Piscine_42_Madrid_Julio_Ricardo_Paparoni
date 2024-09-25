/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:08:55 by marfern3          #+#    #+#             */
/*   Updated: 2024/07/21 21:13:54 by marfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_is_long(int f_dict, char buf[1])
{
	int	count;

	count = 0;
	while (buf[0] >= '0' && buf[0] <= '9')
	{
		count++;
		read(f_dict, buf, 1);
	}
	return (count);
}

int	ft_check_dic(char *dic, int len)
{
	int		f_dict;
	char	buf[1];
	int		count;

	count = 0;
	f_dict = open(dic, O_RDONLY);
	if (f_dict == -1)
		return (-1);
	while (read(f_dict, buf, 1) != 0)
	{
		count = ft_is_long(f_dict, buf);
		while (buf[0] == ' ')
			read(f_dict, buf, 1);
		if (buf[0] == ':')
			read(f_dict, buf, 1);
		while (buf[0] == ' ')
			read(f_dict, buf, 1);
		while (buf[0] != '\n')
			read(f_dict, buf, 1);
		if ((count + 3) > len)
		{
			return (1);
			close(f_dict);
		}
	}
	close(f_dict);
	return (0);
}
