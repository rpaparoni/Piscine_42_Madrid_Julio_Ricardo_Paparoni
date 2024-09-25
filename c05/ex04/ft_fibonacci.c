/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:53:19 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/24 18:37:24 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	if (index > 2)
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	return (0);
}
/*
#include <stdio.h>
int	main ()
{	
	printf("%i\n",ft_fibonacci(21));
	printf("%i\n",ft_fibonacci(1));
	printf("%i\n",ft_fibonacci(2));
	printf("%i\n",ft_fibonacci(4));
}*/
