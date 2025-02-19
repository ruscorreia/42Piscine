#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return 1;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		return 0;
		str++;
	}
}
