// ft_print_numbers.c

// Header 42 padrão
/*
** ***************************************************************************
** Author: Rocorrei
** Email: rusacoreia@hotmail.com
** Created: 2025-02-10
** Updated: SeuLogin 2025-02-15
**
** Description: Função ft_print_numbers para exibir todos os dígitos de 0 a 9.
** ***************************************************************************
*/

#include <unistd.h> // Inclusão do cabeçalho necessário para a função write

void    ft_print_numbers(void); // Protótipo da função

void    ft_print_numbers(void)
{
    char c = '0'; // Inicializa o caractere com '0'

    while (c <= '9') // Loop enquanto o caractere for menor ou igual a '9'
    {
        write(1, &c, 1); // Escreve o caractere na saída padrão
        c++;             // Incrementa o caractere para a próxima iteração
    }
}
