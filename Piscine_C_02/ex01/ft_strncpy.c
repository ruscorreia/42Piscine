#include <unistd>

char	*ft_strncpy (char *dest, char *scr, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src != '\0')
	{
		*dest = *src;
		i++;
		src++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
	}
	return dest;
}
