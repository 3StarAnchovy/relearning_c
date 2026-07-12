#include "libft.h"

// 메모리 영역 s의 nbyte까지 0으로 초기화
void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ptr;

	ptr = s;

	for(i = 0; i < n; i ++) {
		*(ptr + i) = 0;
	}
}
