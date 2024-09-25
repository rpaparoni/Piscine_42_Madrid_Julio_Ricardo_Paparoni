/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:33:42 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/17 15:48:15 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	printf("%d", ft_str_is_lowercase("aaaaaa"));
        printf("\n%d", ft_str_is_lowercase("KLKklk"));
        printf("\n%d", ft_str_is_lowercase("9238537KLK"));
        printf("\n%d", ft_str_is_lowercase("9238537"));
        printf("\n%d", ft_str_is_lowercase(""));
}*/
