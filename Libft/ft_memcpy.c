#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t i;
	
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < count)
	{
		((char *) dest)[i] = ((char*) src) [i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main ()
{
	const char src[50] = "www.valete.com";
	char dest[50] = "ola manuel";

	printf("%s\n", dest);
	printf("%s", ft_memcpy(dest, src, 20));
} */