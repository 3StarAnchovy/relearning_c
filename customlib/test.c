#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(void)
{
	int a = ft_isalpha('1');
	int b = ft_isalpha('A');

	printf("%d\n", a);
	printf("%d\n", b);

	printf("--- ft_isascii ---\n");
	printf("%d\n", ft_isascii('A'));    // 0~127 -> 1
	printf("%d\n", ft_isascii(0));      // 경계값 0 -> 1
	printf("%d\n", ft_isascii(127));    // 경계값 127 -> 1
	printf("%d\n", ft_isascii(128));    // 범위 밖 -> 0
	printf("%d\n", ft_isascii(-1));     // 음수 -> 0

	printf("--- ft_isprint ---\n");
	printf("%d\n", ft_isprint('A'));    // 일반 문자 -> 1
	printf("%d\n", ft_isprint(' '));    // 경계값 32(공백) -> 1
	printf("%d\n", ft_isprint('~'));    // 경계값 126 -> 1
	printf("%d\n", ft_isprint('\n'));   // 31 이하(개행) -> 0
	printf("%d\n", ft_isprint(127));    // 범위 밖(DEL) -> 0

	printf("--- ft_strlen ---\n");
	printf("%zu\n", ft_strlen("hello"));      // 5
	printf("%zu\n", ft_strlen(""));           // 0 (빈 문자열)
	printf("%zu\n", ft_strlen("a"));          // 1
	printf("%zu\n", ft_strlen("hello world")); // 11 (공백 포함)

	printf("--- ft_memset ---\n");
	{
		char	buf1[10];
		char	buf2[10];
		void	*ret;

		memset(buf1, 'A', 10);          // 정답(표준 memset)
		ret = ft_memset(buf2, 'A', 10); // 내 구현
		printf("결과 일치: %s\n", (memcmp(buf1, buf2, 10) == 0) ? "OK" : "FAIL");
		printf("리턴값이 원본 포인터와 동일: %s\n", (ret == buf2) ? "OK" : "FAIL");
	}
	{
		int	arr1[5];
		int	arr2[5];

		memset(arr1, 0, sizeof(arr1));           // int 배열도 바이트 단위로 밀기
		ft_memset(arr2, 0, sizeof(arr2));
		printf("int 배열 일치: %s\n", (memcmp(arr1, arr2, sizeof(arr1)) == 0) ? "OK" : "FAIL");
	}
	{
		char	buf3[5] = "abcde";
		char	buf4[5] = "abcde";

		memset(buf3, 0, 0);      // len 0 -> 아무것도 안 바뀌어야 함
		ft_memset(buf4, 0, 0);
		printf("len 0 처리: %s\n", (memcmp(buf3, buf4, 5) == 0) ? "OK" : "FAIL");
	}

	printf("--- ft_bzero ---\n");
	{
		char	buf5[10] = "hongjimin";
		char	buf6[10] = "hongjimin";

		bzero(buf5, 10);      // 정답(표준 bzero)
		ft_bzero(buf6, 10);   // 내 구현
		printf("결과 일치: %s\n", (memcmp(buf5, buf6, 10) == 0) ? "OK" : "FAIL");
	}
	{
		char	buf7[10] = "abcdefghi";
		char	buf8[10] = "abcdefghi";

		bzero(buf7, 4);       // 앞 4바이트만 0
		ft_bzero(buf8, 4);
		printf("일부만 초기화: %s\n", (memcmp(buf7, buf8, 10) == 0) ? "OK" : "FAIL");
	}

	printf("--- ft_memcpy ---\n");
	{
		char	src1[10] = "hongjimin";
		char	dst1[10];
		char	dst2[10];
		void	*ret;

		memcpy(dst1, src1, 10);          // 정답(표준 memcpy)
		ret = ft_memcpy(dst2, src1, 10); // 내 구현
		printf("결과 일치: %s\n", (memcmp(dst1, dst2, 10) == 0) ? "OK" : "FAIL");
		printf("리턴값이 dst와 동일: %s\n", (ret == dst2) ? "OK" : "FAIL");
	}
	{
		char	src2[10] = "abcdefghi";
		char	dst3[10] = "XXXXXXXXX";
		char	dst4[10] = "XXXXXXXXX";

		memcpy(dst3, src2, 4);      // 앞 4바이트만 복사, 나머지는 그대로
		ft_memcpy(dst4, src2, 4);
		printf("일부만 복사: %s\n", (memcmp(dst3, dst4, 10) == 0) ? "OK" : "FAIL");
	}

	return (0);
}
