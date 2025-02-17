/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   ft_print_alphabet.c:+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: rocorrei <marvin@42.fr>+#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2025/02/17 10:56:47 by rocorrei  #+##+# */
/*   Updated: 2025/02/17 10:57:03 by rocorrei ###   ########.fr   */
/**/
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
