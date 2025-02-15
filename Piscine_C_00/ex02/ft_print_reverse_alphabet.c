// ft_print_reverse_alphabet.c

// Header 42 padrão
/*
** ***************************************************************************
** Author: Rocorrei
** Email: rusacoreia@hotmail.com
** Created: 2025-02-10
** Updated: SeuLogin 2025-02-15
**
** Description: Função ft_print_reverse_alphabet para exibir o alfabeto em minúsculo
**              em ordem decrescente.
** ***************************************************************************
*/

#include <unistd.h> // Inclusão do cabeçalho necessário para a função write

void    ft_print_reverse_alphabet(void); // Protótipo da função

void    ft_print_reverse_alphabet(void)
{
    char c = 'z'; // Inicializa o caractere com 'z'

    while (c >= 'a') // Loop enquanto o caractere for maior ou igual a 'a'
    {
        write(1, &c, 1); // Escreve o caractere na saída padrão
        c--;             // Decrementa o caractere para a próxima iteração
    }
}
