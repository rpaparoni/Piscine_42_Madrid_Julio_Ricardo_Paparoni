/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:18:31 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/25 09:11:05 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	result = nb;
	while (--power > 0)
	{
		result *= nb;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int nb;
	int power;
	nb = 4;
	power = 4;
	printf("%d\n",ft_iterative_power(nb, power));	
}*/
