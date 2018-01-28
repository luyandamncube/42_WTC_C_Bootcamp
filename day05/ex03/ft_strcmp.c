#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int k;
	int m;

	m = 0;

	while (s2[m] != '\0' && s1[m] != '\0')
	{
		m++;
	}
	k = 0;
	//while (s2[k] != '\0')
	while (k < m)
	{
		if (s2[k] == s1[k])
		{ 
			k++;
		}
		if (s2[k] != s1[k] && k > 0)
			return (k);
	}
		return (-1);
}

int main (void)
{
	char s[] = "by";
	char d[] = "Hello World!";


	printf("%d\n", ft_strcmp(d,s));
	return (0);
}
