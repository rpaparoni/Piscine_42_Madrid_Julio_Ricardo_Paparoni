/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:28:10 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/09 20:32:17 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ((a / 10) + '0', (a % 10) + '0');
			write (1, " ", 1);
			ft_putchar ((b / 10) + '0', (b % 10) + '0');
			if (a != 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*int main(){
	ft_print_comb2();
}*/
