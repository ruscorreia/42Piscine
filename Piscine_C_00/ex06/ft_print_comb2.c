#include <unistd.h>

void    ft_print_comb2(void);

#include <unistd.h>

void    ft_writeint(int i)
{
    char a = i + '0';
    write(1, &a, 1);
}

void    ft_print_comb2(void)
{
    int i;
    char *str = " ";
    
    i = 0;
    while (i <= 99) 
    {
        int j;
        j = i + 1;
        while (j <= 99)
        {
            ft_writeint(i / 10 );
            ft_writeint(i % 10 );            
            write(1, str, 1);
            ft_writeint(j / 10 );
            ft_writeint(j % 10 );
            if (i != 98 || j != 99)
            {
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
}