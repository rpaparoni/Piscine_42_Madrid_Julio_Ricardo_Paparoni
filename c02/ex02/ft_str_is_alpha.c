/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:54:48 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/18 03:39:37 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_alpha("KLK"));
	printf("\n%d", ft_str_is_alpha("9238537KLK"));
	printf("\n%d", ft_str_is_alpha("9238537"));
	printf("\n%d", ft_str_is_alpha(""));
}*/
