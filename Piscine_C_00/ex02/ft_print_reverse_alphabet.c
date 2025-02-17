/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   ft_print_reverse_alphabet.c:+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: rocorrei <marvin@42.fr>+#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2025/02/17 10:57:17 by rocorrei  #+##+# */
/*   Updated: 2025/02/17 10:57:33 by rocorrei ###   ########.fr   */
/**/
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
