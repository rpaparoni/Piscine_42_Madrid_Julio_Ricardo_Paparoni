/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:41:12 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/17 15:04:52 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char src[] = "klk";
	char dest[] = "manin";
	printf("%s", ft_strncpy(dest, src, 1));
	printf("\n%s", ft_strncpy(dest, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 3));


}*/
