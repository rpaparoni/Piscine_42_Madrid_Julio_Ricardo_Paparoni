/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:12:53 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/17 15:54:18 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("%d", ft_str_is_uppercase("KLSKLAKS"));
	printf("\n%d", ft_str_is_uppercase("aaaaaa"));
        printf("\n%d", ft_str_is_uppercase("KLKklk"));
        printf("\n%d", ft_str_is_uppercase("9238537KLK"));
        printf("\n%d", ft_str_is_uppercase("9238537"));
        printf("\n%d", ft_str_is_uppercase(""));
}*/
