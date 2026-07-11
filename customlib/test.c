#include "libft.h"
#include <stdio.h>

int main() {
	int a = ft_isalpha('a');
	int b = ft_isalpha('A');
	int c = ft_isalpha('2');

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	return 0;
}
