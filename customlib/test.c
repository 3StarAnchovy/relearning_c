#include "libft.h"
#include <stdio.h>

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

	return (0);
}
