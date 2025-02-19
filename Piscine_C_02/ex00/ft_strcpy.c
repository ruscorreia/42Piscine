#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
	}
	*src = '\0';
	return dest;
}
