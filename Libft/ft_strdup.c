#include "libft.h"

char *strdup(const char *str)
{
	int	i;
	char	*new;

	i = 0;
	while (str[i])
		i++;
	if (!(new = (char *) malloc((i + 1) * sizeof(char))))
			return (NULL);
	i = 0;
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new [i] = '\0';
	return (new);
}
