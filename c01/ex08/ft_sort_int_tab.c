/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:14:17 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/10 21:50:11 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a < size - 1)
	{
		b = 0;
		while (b < size - a - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}
/*
int main(void){
	int tab[6] = {4, 2 , 7, 5, 3, 6};
	int size = 6;
	int i;
	ft_sort_int_tab(tab, size);
	for (i = 0; i < size; i++){
	printf("%d", tab[i]);
	}
	return 0;
}*/
