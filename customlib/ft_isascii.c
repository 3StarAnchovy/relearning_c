#include "libft.h"

// 아스키 코드면 1
// 아스키 코드가 아니면 0
// 아스키코드 0 ~ 127
int ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return 1;
	return 0;
}
