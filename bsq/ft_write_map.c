/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:30:23 by rpaparon          #+#    #+#             */
/*   Updated: 2024/07/24 17:32:33 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_write_map()
{
    int filas;
    int columnas;
    int **x;
    int i;
    int j;
    
    filas = 4;
    columnas = 4;
    x = (char **)malloc(filas*sizeof(char*));
    
        i = 0;
    while (i < filas) 
    {
        x[i] = (char*)malloc(columnas * sizeof(char));
        i++;
    }
    x[0][0] = '.';
    x[0][1] = '.';
    x[0][2] = '.';
    x[0][3] = '.';
        
    x[1][0] = '.';
    x[1][1] = '.';
    x[1][2] = '.';
    x[1][3] = '.';
    
    x[2][0] = '.';
    x[2][1] = '.';
    x[2][2] = '.';
    x[2][3] = '.';
       
    x[3][0] = '-';
    x[3][1] = '.';
    x[3][2] = '.';
    x[3][3] = '.';
       

/*    i = 0;
while (i < columnas) {
    printf("\n");
    j = 0;
    while (j < columnas) {
        printf("\t%c", x[i][j]);
        j++;
    }
    i++;
}


    return 0;
    
}*/
