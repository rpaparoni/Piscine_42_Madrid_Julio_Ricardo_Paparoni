/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:46:22 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/24 18:49:38 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_is_prime(13));
	printf("%d\n",ft_is_prime(15));
}*/
