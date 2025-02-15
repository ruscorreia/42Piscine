// ft_print_comb2.c

// Header 42 padrão
/*
** ***************************************************************************
** Author: Rocorrei
** Email: rusacoreia@hotmail.com
** Created: 2025-02-10
** Updated: SeuLogin 2025-02-15
**
** Description: Função ft_print_comb2 para exibir todas as combinações de dois
**              números entre 0 e 99 em ordem crescente.
** ***************************************************************************
*/

#include <unistd.h> // Inclusão do cabeçalho necessário para a função write

void    ft_print_comb2(void); // Protótipo da função

void    ft_print_comb2(void)
{
    int i;
    int j;

    i = 0; // Primeiro número da combinação
    while (i <= 98) // O primeiro número pode ir até 98 para permitir combinações com o segundo número
    {
        j = i + 1; // Segundo número da combinação, maior que o primeiro
        while (j <= 99)
        {
            // Escreve o primeiro número com dois dígitos
            if (i < 10)
                write(1, "0", 1);
            write(1, &i, 1);

            // Escreve um espaço
            write(1, " ", 1);

            // Escreve o segundo número com dois dígitos
            if (j < 10)
                write(1, "0", 1);
            write(1, &j, 1);

            // Verifica se não é a última combinação
            if (i != 98 || j != 99)
                write(1, ", ", 2);

            j++; // Incrementa o segundo número
        }
        i++; // Incrementa o primeiro número
    }
}
