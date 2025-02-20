#include <unistd.h>

char	*ft_strcpy(char *dest, char *src) 
{
	char *inicio_dest;

	*inicio_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (inicio_dest);
}