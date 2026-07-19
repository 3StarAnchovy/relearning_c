#include "libft.h"

// 메모리 영역 src에서 dst로 n bytes만큼 복사하는데,
// src에서 c가 나타날 때까지만 복사합니다(첫번째 c도 복사함). 절대 src와 dst의 메모리 영역이 겹쳐서는 안됩니다.
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i = 0;
	unsigned char *ptr;

	ptr = dst;

	while (i < n)
	{
		*(ptr + i) = *(unsigned char *)(src + i);
		if (*(unsigned char *)(src + i) == c)
		{
			return (ptr + i + 1);

		}
		i++;
	}
	return NULL;
}
