#include "libft.h"

// 출력가능한 문자면 1
// 출력가능한 문자가 아니면 0
// 출력가능한 문자 32 ~ 126

int ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return 1;
	return 0;
}
