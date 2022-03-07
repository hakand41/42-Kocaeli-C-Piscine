#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	index;
	
	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char	*src)
{
	int	index;
	char	*dest;
	char	*d;
	
	index = 0;
	d = ((dest = (char	*)malloc(ft_strlen(src) * sizeof(char) + 1)));
	if (!d)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
