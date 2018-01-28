#include <stdio.h>

char    *ft_strsr(char *str, char *to_find)
{
	int k;
        k = 0;

	while (to_find[k] != '\0')
	{
		if (to_find[k] == str[k])
		{ 
			k++;
		}
	}
	if (k == 0)
		return ('\0');
	else	
		return (to_find);
}

int main (void)
{
	char s[] = "Hello";
	char d[] = "Hello world I'm sick";


	printf("%s\n", ft_strstr(d,s));
	return (0);
}
