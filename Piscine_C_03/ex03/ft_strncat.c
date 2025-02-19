#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb) 
{
	char *original_dest;

	*original_dest = dest;
	while (*dest)
		dest++;
	while (nb > 0 && *src != '\0') 
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}	
	*dest = '\0';
	return original_dest;
}
