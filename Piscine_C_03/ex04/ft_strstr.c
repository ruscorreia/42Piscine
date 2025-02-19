#include <unistd.h>

char	*ft_strstr(char *str, char *to_find) 
{
	if (*to_find == '\0') 
		return (char *)str;
	while (*str != '\0') 
	{
		char *p1;
		char *p2;

		*p1= str;
		*p2= to_find;
		while (*p1 != '\0' && *p2 != '\0' && (*p1 == *p2)) 
		{
			p1++;
			p2++;
		}	
		if (*p2 == '\0') 
			return (char *)str;
		str++;
	}
}
