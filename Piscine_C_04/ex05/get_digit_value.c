int get_digit_value(char c, char *base) 
{
int i;

i = 0;
while (base[i] != '\0') 
{
if (base[i] == c)
return i;
i++;
}
return -1;
}

int is_valid_base(char *base) 
{
int len;
len = ft_strlen(base);
if (len <= 1) return 0;

for (int i = 0; i < len; i++) 
{
if (base[i] == '+' || base[i] == '-') return 0;
for (int j = i + 1; j < len; j++) 
{
if (base[i] == base[j]) return 0;
}
}

return 1;
}

int ft_atoi_base(char *str, char *base) 
{
int result;
int sign;
int base_len ;
int i;

result = 0;
sign = 1;
base_len = ft_strlen(base);
i = 0;
if (!is_valid_base(base)) return 0;
while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) 
i++;
while (str[i] == '+' || str[i] == '-') 
{
if (str[i] == '-') 
sign *= -1;
i++;
}
while (get_digit_value(str[i], base) != -1) 
{
result = result * base_len + get_digit_value(str[i], base);
i++;
}
return result * sign;
}