#include "libft.h"

int	found(const char *big, const char *little, size_t len)
{
	while (len && *little)
	{
		if (*big == *little)
		{
			big++;
			little++;
			len--;
		}
		else
			return (0);
	}
	if (len < 0)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		if (found(big, little, len))
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
