/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:32:11 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/11 17:29:29 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = size -1;
	while (a < size / 2)
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		a++;
		b--;
	}
}
/*
#include <stdio.h>
int main(void){
        int tab[6] = {1, 2 , 3, 4, 5, 6};
        int size = 6;
        int i;
        ft_rev_int_tab(tab, size);
        for (i = 0; i < size; i++){
        printf("%d", tab[i]);
        }
        return 0;
}
*/
