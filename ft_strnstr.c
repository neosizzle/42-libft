#include "libft.h"

int	found(const char *big, const char *little, size_t len)
{
	while (len && *little)
	{
		if (*little == *big)
		{
			little++;
			big++;
		}
		else
			return (0);
		len--;
	}
	if (!len)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!little)
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
