#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	while (start)
	{
		if (!*s)
			return ("\0");
		s++;
		start--;
	}
	i = 0;
	while (len && *s)
	{
		res[i++] = (*s++);
		len--;
	}
	res[i] = 0;
	return (res);
}
