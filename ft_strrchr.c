#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					i;
	unsigned char		*str;

	i = 0;
	str = (unsigned char *)s;
	i = ft_strlen((char *)s);
	if (c > 127)
		return ((char *)s);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
