#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char *original_dest;

	*original_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return original_dest;
}
