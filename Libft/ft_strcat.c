#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
