// ft_putchar.c

// Header 42 padrão
/*
** ***************************************************************************
** Author: Rocorrei
** Email: rusacoreia@hotmail.com
** Created: 2025-02-10
** Updated: SeuLogin 2025-02-15
**
** Description: Função ft_putchar para exibir um caractere na saída padrão.
** ***************************************************************************
*/

#include <unistd.h> // Inclusão do cabeçalho necessário para a função write

void    ft_putchar(char c); // Protótipo da função

void    ft_putchar(char c)
{
    write(1, &c, 1); // Usando a função write para exibir o caractere
}
