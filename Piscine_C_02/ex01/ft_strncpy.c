#include <unistd>

char	*ft_strncpy(char *dest, char *src, unsigned int n) 
{
	unsigned int i;
	char *inicio_dest;

	i = 0;
	*inicio_dest = dest;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n) 
	{
        
        i++;
    }
	return (inicio_dest);
}
