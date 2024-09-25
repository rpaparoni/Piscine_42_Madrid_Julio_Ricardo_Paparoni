/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:27:40 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/23 17:13:01 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ii;

	i = 0;
	ii = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ii == 1)
				str[i] -= 32;
			ii = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			ii = 0;
		else
			ii = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(void){
	
	char str[] = "\201 salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return 0;
}

