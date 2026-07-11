#include "libft.h"

// 숫자문자면 1
// 숫자문자 가 아니면 0
int ft_isdigit(int c) {
	if('0' <= c && c <= '9')
		return 1;
	return 0;
}
