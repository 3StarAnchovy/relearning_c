#include "libft.h"

// 메모리 영역 src의 len bytes만큼을 dst로 복사합니다. memcpy와 동일하나, src와 dst의 메모리 영역이 겹칠 때 사용합니다.
// 메모리 주소가 인접해있으면, 복사하다가 덮어씌울수 있음
void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t backIdx;
	size_t i;

	if (dst <= src)
	{ // 걍 앞에서 복사
		for (i = 0; i < len; i++)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		}
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			backIdx = len - i -1;
			*(unsigned char *)(dst + backIdx) = *(unsigned char *)(src + backIdx);
		}
	}

	return dst;
}
