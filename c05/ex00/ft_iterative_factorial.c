/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:03:25 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/22 18:12:15 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int	result;	
	int	nb;
	nb = 5;
	result = ft_iterative_factorial(nb);
	printf("%d\n",result);
}*/
