// ft_print_comb.c

// Header 42 padrão
/*
** ***************************************************************************
** Author: Rocorrei
** Email: rusacoreia@hotmail.com
** Created: 2025-02-10
** Updated: SeuLogin 2025-02-15
**
** Description: Função ft_print_comb para exibir todas as combinações de três
**              números diferentes em ordem crescente.
** ***************************************************************************
*/

#include <unistd.h> // Inclusão do cabeçalho necessário para a função write

void    ft_print_comb(void); // Protótipo da função

void    ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = '0'; // Primeiro dígito
    while (i <= '7') // O primeiro dígito pode ir até 7 para permitir combinações com outros dois dígitos
    {
        j = i + 1; // Segundo dígito, maior que o primeiro
        while (j <= '8')
        {
            k = j + 1; // Terceiro dígito, maior que o segundo
            while (k <= '9')
            {
                write(1, &i, 1); // Escreve o primeiro dígito
                write(1, &j, 1); // Escreve o segundo dígito
                write(1, &k, 1); // Escreve o terceiro dígito
                if (i != '7' || j != '8' || k != '9') // Verifica se não é a última combinação
                    write(1, ", ", 2); // Adiciona vírgula e espaço entre combinações
                k++; // Incrementa o terceiro dígito
            }
            j++; // Incrementa o segundo dígito
        }
        i++; // Incrementa o primeiro dígito
    }
}
