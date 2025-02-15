// ft_print_combn.c

// Header 42 padrão
/*
** ***************************************************************************
** Author: Rocorrei
** Email: rusacoreia@hotmail.com
** Created: 2025-02-10
** Updated: SeuLogin 2025-02-15
**
** Description: Função ft_print_combn para exibir todas as combinações de n
**              números em ordem crescente.
** ***************************************************************************
*/

#include <unistd.h> // Inclusão do cabeçalho necessário para a função write

void    ft_print_combn(int n); // Protótipo da função principal
void    ft_print_combn_recursive(char *comb, int len, int start, int n); // Protótipo da função auxiliar
void    ft_print_number(char *number, int len); // Protótipo da função auxiliar para imprimir números

void    ft_print_combn(int n)
{
    if (n <= 0 || n >= 10) // Verifica se n está dentro dos limites válidos
        return ;
    char comb[10]; // Buffer para armazenar a combinação atual
    ft_print_combn_recursive(comb, 0, 0, n); // Chama a função recursiva
}

void    ft_print_combn_recursive(char *comb, int len, int start, int n)
{
    if (len == n) // Quando a combinação atinge o tamanho desejado
    {
        ft_print_number(comb, n); // Imprime a combinação
        if (comb[0] != '9' - n + 1) // Verifica se não é a última combinação
            write(1, ", ", 2); // Adiciona vírgula e espaço entre combinações
        return ;
    }
    for (int i = start; i <= 9; i++) // Loop para gerar combinações
    {
        comb[len] = i + '0'; // Converte o número para caractere
        ft_print_combn_recursive(comb, len + 1, i + 1, n); // Chamada recursiva para o próximo dígito
    }
}

void    ft_print_number(char *number, int len)
{
    for (int i = 0; i < len; i++) // Escreve cada dígito da combinação
        write(1, &number[i], 1);
}
