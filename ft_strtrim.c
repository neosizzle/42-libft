#include <stdlib.h>
#include "libft.h"
// size_t ft_strlen(const char *s)
// {
// 	int	res;

// 	res = 0;
// 	while (s[res])
// 		res++;
// 	return (res);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s && *s != c)
// 		s++;
// 	if (*s == c)
// 		return ((char *)s);
// 	return (0);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*res;
// 	int		i;

// 	res = (char *)malloc(len + 1);
// 	if (!res)
// 		return (0);
// 	while (start)
// 	{
// 		if (!*s)
// 			return ("\0");
// 		s++;
// 		start--;
// 	}
// 	i = 0;
// 	while (len && *s)
// 	{
// 		res[i++] = (*s++);
// 		len--;
// 	}
// 	res[i] = 0;
// 	return (res);
// }

//1. move the ptr to the right as long as the current char is found in set
//2. move the ending ptr to the left long as the pointed char is found in set
//3. return the substring 
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
	{
		len--;
	}
	return (ft_substr(s1, 0, len + 1));
}
/*
int	main()
{

	return 0;
}*/
