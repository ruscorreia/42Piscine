// ft_print_alphabet.c

// Header 42 padrão
/*
** ***************************************************************************
** Author: Rocorrei
** Email: rusacoreia@hotmail.com
** Created: 2025-02-10
** Updated: SeuLogin 2025-02-15
**
** Description: Função ft_print_alphabet para exibir o alfabeto em minúsculo.
** ***************************************************************************
*/

#include <unistd.h> // Inclusão do cabeçalho necessário para a função write

void    ft_print_alphabet(void); // Protótipo da função

void    ft_print_alphabet(void)
{
    char c = 'a'; // Inicializa o caractere com 'a'

    while (c <= 'z') // Loop enquanto o caractere for menor ou igual a 'z'
    {
        write(1, &c, 1); // Escreve o caractere na saída padrão
        c++;             // Incrementa o caractere para a próxima iteração
    }
}
