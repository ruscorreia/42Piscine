// ft_is_negative.c

// Header 42 padrão
/*
** ***************************************************************************
** Author: Rocorrei
** Email: rusacoreia@hotmail.com
** Created: 2025-02-10
** Updated: SeuLogin 2025-02-15
**
** Description: Função ft_is_negative para exibir 'N' se o número for negativo,
**              ou 'P' se for positivo ou nulo.
** ***************************************************************************
*/

#include <unistd.h> // Inclusão do cabeçalho necessário para a função write

void    ft_is_negative(int n); // Protótipo da função

void    ft_is_negative(int n)
{
    if (n < 0) // Verifica se o número é negativo
        write(1, "N", 1); // Escreve 'N' na saída padrão
    else
        write(1, "P", 1); // Escreve 'P' na saída padrão
}
