#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dest_len;
	size_t src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;

	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (n - 1 <= dest_len)
		return (src_len + n);
	while (dest_len + i < n - 1)
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest_len + src_len);
}
