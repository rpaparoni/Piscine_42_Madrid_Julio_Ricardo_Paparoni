#include "lib.h"

int	ft_is_num(int f_dict, char buf[1], char *c)
{
	int flag;
	int i;
	
	i = 0;
	flag = 0;
	//read(f_dict, buf, 1);
	while (buf[0] >= '0' && buf[0] <= '9' && c[i] != '\0')
	{
		if (buf[0] == c[i])
			flag = 1;
		else
		{
			read(f_dict, buf, 1);
			return (0);
		}
		i++;
		read(f_dict, buf, 1);
	}
	if (c[i] != '\0')
		flag = 0;
	return (flag);
}

void    ft_is_writen_num(int f_dict, char buf[1], int flag)
{
    while (buf[0] >= 32 && buf[0] < 127)
    {
		if (flag == 1)
        	write(1, &buf[0], 1);
        read(f_dict, buf, 1);
	}
   // write(1, "\n", 1);
}

int ft_search_num(char *c, char *dic, int last)
{
    int f_dict;
    //int i;
    char buf[1];
	int flag = 0;

    //i = 0;
    f_dict = open(dic, O_RDONLY);
    if (f_dict == -1)
        return (-1) ;
    while (read(f_dict, buf, 1) != 0 && flag != 1)
    {
        flag = ft_is_num(f_dict, buf, c);
        while (buf[0] == ' ')
            read(f_dict, buf, 1);
        if (buf[0] == ':')
            read(f_dict, buf, 1);
        while   (buf[0] == ' ')
            read(f_dict, buf, 1);
        ft_is_writen_num(f_dict, buf, flag);
		//while (buf[0] >= '0' && buf[0] <= '9')
		while (buf[0] != '\n')
			read(f_dict, buf, 1);
        //i++;
    }
	//if (flag == 0)
    //	write(1,"Dict Error\n", 11);
	//printf("%i\n", last);
	if (last != 1)
		write(1, " ", 1);
	//else
	//	write(1, "\n", 1);
    close(f_dict);
	return (flag);
}