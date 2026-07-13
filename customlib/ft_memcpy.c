#include "libft.h"

// 메모리 영역 src의 n byte만큼 복사
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ptr;
	size_t i;

	ptr = dst;

	for (i = 0; i < n; i++)
	{
		*(ptr+i) = *(unsigned char *)(src + i);
	}

	return ptr;
}
