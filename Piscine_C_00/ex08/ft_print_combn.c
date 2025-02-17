/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   ft_print_combn.c   :+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: rocorrei <marvin@42.fr>+#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2025/02/17 11:00:54 by rocorrei  #+##+# */
/*   Updated: 2025/02/17 11:01:13 by rocorrei ###   ########.fr   */
/**/
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_print_combn_recursive(char *comb, int len, int start, int n);
void	ft_print_number(char *number, int len);

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_print_combn_recursive(comb, 0, 0, n);
}

void	ft_print_combn_recursive(char *comb, int len, int start, int n)
{
	if (len == n)
	{
		ft_print_number(comb, n);
		if (comb[0] != '9' - n + 1)
			write(1, ", ", 2);
		return ;
	}
	for (int i = start; i <= 9; i++)
	{
		comb[len] = i + '0';
		ft_print_combn_recursive(comb, len + 1, i + 1, n);
	}
}

void	ft_print_number(char *number, int len)
{
	for (int i = 0; i < len; i++)
		write(1, &number[i], 1);
}
