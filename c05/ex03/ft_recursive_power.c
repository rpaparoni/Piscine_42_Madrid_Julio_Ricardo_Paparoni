/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:45:34 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/25 09:11:32 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
	if (--power > 0)
	{
		result = (nb * ft_recursive_power(nb, power));
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int	nb;
	int	power;

	nb = 4;
	power = 4;
	printf("%d\n",ft_recursive_power(nb, power));
	return (0);
}*/
