/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:04:38 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/25 18:07:19 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{	
	char	a[] = "hola caracola";
	char	b[] = "caracola";
	printf("%s", ft_strstr(a ,b));
	return (0);
}*/
