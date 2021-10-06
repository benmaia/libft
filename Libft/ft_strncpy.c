#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (src[i])
	{
		while (j < n)
		{
			dest[j] = src[j];
			j++;
		}
		i++;
	}
	while (i < n)
	{
		dest[j] = '\0';
		i++;
	}
	return (dest);
}
