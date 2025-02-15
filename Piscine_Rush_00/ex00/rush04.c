void    ft_putchar(char c);
void	rush(int x, int y)
{
    int	i; // Variável para controlar a altura
    int	j; // Variável para controlar a largura

    if (x <= 0 || y <= 0) // Verifica se as dimensões são válidas
        return ;
    i = 0;
    while (i < y) // Loop para controlar a altura
    {
        j = 0;
        while (j < x) // Loop para controlar a largura
        {
            if (i == 0 && j == 0) // Canto superior esquerdo
                ft_putchar('A');
            else if (i == 0 && j == x - 1) // Canto superior direito
                ft_putchar('C');
            else if (i == y - 1 && j == 0) // Canto inferior esquerdo
                ft_putchar('C');
            else if (i == y - 1 && j == x - 1) // Canto inferior direito
                ft_putchar('A');
            else if (i == 0 || i == y - 1) // Borda superior ou inferior
                ft_putchar('B');
            else if (j == 0 || j == x - 1) // Borda lateral
                ft_putchar('B');
            else // Interior do retângulo
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n'); // Pula para a próxima linha
        i++;
    }
}
