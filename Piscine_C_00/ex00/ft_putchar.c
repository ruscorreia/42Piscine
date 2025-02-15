#include "unistr.h"

void	ft_putchar(void)
{
	int i;
	int j;
	int k;

    i = 0;
    while (i <= 9) 
    {
        j = i + 1;
        while (j <= 9) 
	{
            k = j + 1;
            while (k <= 9) 
	    {
                // Imprime os três números
		char ch = i + '0';
		write(1,ch,1);
                vh = j + '0';
		 write(1,ch,1);
                ch = k + '0';
		 write(1,ch,1);
                // Verifica se é necessário adicionar uma vírgula
                if (i != 7 || j != 8 || k != 9) {
			
                    ch = ',';
		    write(1,ch,1);


                }
                k++;
            }
            j++;
        }
        i++;
    }
}
int main(void)
{
	ft_putchar();
	return;
}
