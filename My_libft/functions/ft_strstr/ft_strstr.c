#include <string.h>

char	*strstr(const char *s1, const char *s2)
{
	size_t n = ft_strlen(s2);
	while(*s1)
		if(!ft_memcmp(s1++,s2,n))
		return (s1 -1);
	return (0);
}