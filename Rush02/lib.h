
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>


int	ft_is_num(int f_dict, char buf[1], char *c);
void	ft_is_writen_num(int f_dict, char buf[1], int flag);
int ft_search_num(char *c, char *dic, int last);
int	ft_str_len(char *str);
void ft_one(char *str, char *dic, int last);
void ft_duo(char *str, char *dic, int last);
void ft_trio(char *str, char *dic, int last);
void ft_zeroes_power(int len,char *str, char *dic, int last);
void ft_numb_combination(char *str, char *dic);
int	ft_is_long(int f_dict, char buf[1]);
int ft_check_dic(char *dic, int len);
