#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n) 
{
 	while (n > 0 && *s1 != '\0' && (*s1 == *s2)) 
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0) 
		return 0;
	return (int) *s1 - (int) *s2;
}
