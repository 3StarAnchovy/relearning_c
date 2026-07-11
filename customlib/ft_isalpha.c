#include "libft.h"

// 알파벳 대문자는 1
// 알파벳 소문자는 2
// 알파벳 아닌거는 0
int ft_isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
		return 1;
	if ('a' <= c && c <= 'z')
		return 2;

		return 0;
}
