/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:29:03 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/17 17:03:15 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int     main()
{
        printf("%d", ft_str_is_numeric("KLKklk"));
        printf("\n%d", ft_str_is_numeric("9238537KLK"));
        printf("\n%d", ft_str_is_numeric("9238537"));
        printf("\n%d", ft_str_is_numeric(""));
}*/
