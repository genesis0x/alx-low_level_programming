char *_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
	char s[5] = "hello";
	printf("%s\n", _memset(s, '0', 5));
	return 0;
}*/
