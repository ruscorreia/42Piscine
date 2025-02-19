#include <unistd.h>

int	ft_strcmp(char *s1, char *s2) 
{
	while (*s1 != '\0' && (*s1 == *s2)) 
	{
		s1++;
		s2++;
	}
	return (int)*s1 - (int)*s2;
}
