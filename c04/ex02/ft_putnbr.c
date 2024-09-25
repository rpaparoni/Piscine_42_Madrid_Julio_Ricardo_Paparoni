/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:36:10 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/10 15:59:49 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		ft_putnbr (147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		ft_putchar (nb + '0');
	}
}
/*
int main(void)
{
	ft_putnbr (42);
	ft_putnbr (-42);
	ft_putnbr (424242);
	ft_putnbr (-42424);
	ft_putnbr (-2147483648);
}*/
