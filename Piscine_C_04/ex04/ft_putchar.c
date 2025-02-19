#include <unistd.h>

void ft_putchar(char c) 
{
write(1, &c, 1);
}

int ft_strlen(char *str) 
{
int length;

length = 0;
while (str[length] != '\0') 
length++;


return length;
}

int is_valid_base(char *base) 
{
int len;

len = ft_strlen(base);
if (len <= 1) return 0;

for (int i = 0; i < len; i++) 
{
if (base[i] == '+' || base[i] == '-') return 0;
for (int j = i + 1; j < len; j++) {
if (base[i] == base[j]) return 0;
}
}

return 1;
}

void ft_putnbr_base(int nbr, char *base) 
{
    int base_len;

base_len = ft_strlen(base);
if (!is_valid_base(base)) return;
if (nbr < 0) 
{
ft_putchar('-');
nbr = -nbr;
}
if (nbr >= base_len) 
ft_putnbr_base(nbr / base_len, base);
ft_putchar(base[nbr % base_len]);
}