#include "includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	printf("hello %d\v%o\v%i\v%x\v%X\v%u\v%c\n%s\n%p\n", 3, 786, -469, 255, 127, -78, 'a', "how are you?", 0x768);
	ft_printf("hello %d\v%o\v%i\v%x\v%X\v%u\v%c\n%s\n%p\n", 3, 786, -469, 255, 127, -78, 'a', "how are you?", 0x768);
	ft_printf("\n");
	printf("null %c and text\n", 0);
	ft_printf("null %c and text\n", 0);
	printf("%p\n", 0);
	ft_printf("%p\n", 0);
	return (0);
}
