/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:50:44 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/23 19:26:40 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((i * i) <= nb)
	{
		i++;
	}
	i--;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_sqrt(8));
}*/
