#include "libft.h"
#include <stdio.h>

// 문자열 s의 길이를 반납
size_t ft_strlen(const char *s)
{

	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
