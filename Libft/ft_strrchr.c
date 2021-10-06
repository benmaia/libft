#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	while (str[i] >= str[j])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	const char str[] = "www.olavalete.com";
	int c = '.';

	printf("%s", ft_strrchr(str, c));
}*/