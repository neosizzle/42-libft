#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (0);
	if (start > ft_strlen(s))
	{
		free(res);
		return (ft_strdup("\0"));
	}
	while (start)
	{
		if (!*s)
		{
			free(res);
			return (ft_strdup("\0"));
		}
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
