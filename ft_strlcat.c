#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		diff;
	int		i;
	size_t	srcptr;
	size_t	dstptr;

	dstptr = 0;
	srcptr = 0;
	i = 0;
	while (dst[dstptr])
		dstptr++;
	while (src[srcptr])
		srcptr++;
	diff = (size - (int)dstptr - 1);
	if (diff >= 0)
	{
		dst += dstptr;
		while (i < diff && src[i])
			*dst++ = src[i++];
		*dst = '\0';
		return (srcptr + dstptr);
	}
	return (size + srcptr);
}
