#include <unistd.h>

void    ft_print_combn(int n);
void    ft_print_combn_recursive(char *comb, int len, int start, int n);
void    ft_print_number(char *number, int len);

void    ft_print_combn(int n)
{
    if (n <= 0 || n >= 10)
        return ;
    char comb[10];
    ft_print_combn_recursive(comb, 0, 0, n);
}

void    ft_print_combn_recursive(char *comb, int len, int start, int n)
{
    if (len == n)
    {
        ft_print_number(comb, n);
        if (comb[0] != '9' - n + 1)
            write(1, ", ", 2);
        return ;
    }

    int i = start;
    while (i <= 9)
    {
        comb[len] = i + '0';
        ft_print_combn_recursive(comb, len + 1, i + 1, n);
        i++;
    }
}

void    ft_print_number(char *number, int len)
{
    int i = 0;
    while (i < len)
    {
        write(1, &number[i], 1);
        i++;
    }
}
