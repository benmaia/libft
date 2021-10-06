#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
                j++;
			}
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char haystack[] = "ola e o meu nome e Valete";
	char needle[] = "e";

	printf("%s", ft_strnstr(haystack, needle, 24));
} */