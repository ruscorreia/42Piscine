/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   ft_putchar.c   :+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: rocorrei <marvin@42.fr>+#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2025/02/17 10:55:31 by rocorrei  #+##+# */
/*   Updated: 2025/02/17 10:56:03 by rocorrei ###   ########.fr   */
/**/
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
