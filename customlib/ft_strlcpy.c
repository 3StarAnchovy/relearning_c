#include "libft.h"

// 문자열 src에서 dst로 dstsize bytes 만큼 복사합니다. 문자열 끝에 NUL문자(\0)가 보장된 strcpy 입니다.
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;
	size_t srcLen;

	srcLen = ft_strlen(src);

	if (dstsize == 0)
		return srcLen;

	for (i = 0; i < dstsize - 1; i++)
	{
		if (i < srcLen)
			*(unsigned char *)(dst + i) = *(const unsigned char *)(src + i);
		else
			break;
	}
	*(unsigned char *)(dst + i) = '\0';

	return srcLen;
}
