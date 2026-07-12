#include "libft.h"

// 메모리 영역 b의 len byte까지를 c로 초기화
// 메모리 영영 b의 포인터를 반환
void* ft_memset(void *b, int c, size_t len) {
	size_t i;
	unsigned char *ptr;

	ptr = b;
	for(i = 0; i < len; i ++) {
		*(ptr + i) = (unsigned char) c;
	}

	return ptr;
}
