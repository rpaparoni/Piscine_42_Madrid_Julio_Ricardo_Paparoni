/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:51:07 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/17 16:00:22 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	printf("%d", ft_str_is_printable("^**¨Ç¨"));
	printf("\n%d", ft_str_is_printable("aaaaaa"));
        printf("\n%d", ft_str_is_printable("KLKklk"));
        printf("\n%d", ft_str_is_printable("9238537KLK"));
        printf("\n%d", ft_str_is_printable("9238537"));
        printf("\n%d", ft_str_is_printable(""));
}*/
