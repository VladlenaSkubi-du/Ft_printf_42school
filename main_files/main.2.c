#include <stdio.h>
#include "includes/ft_printf.h"

int main(void)
{
	//printf("%# -.22lF\n", 0.000000);
	//ft_printf("%# -.22lF\n", 0.000000);
//	int128_t one = 1;
//
//	long double a = 31465.00000;
//	int128_t	bl = *((int128_t*)&a);
//	int count = 80;
//	while (--count >= 0)
//		printf ("%d ", ((one << count) & bl) ? 1 : 0);
//	printf ("\n"); 
//	printf("ori: %2.29Lf\n", a);
//	ft_printf("our: %2.29Lf\n", a);
//	printf("ori: 42%.42lF42\n", -9223372036854775808.000000);
//	ft_printf("our: 42%.42lF42\n", -9223372036854775808.000000);
/*	printf("ori: %2.29LF\n", a);
	ft_printf("our: %2.29LF\n", a);
	printf("ori: %2.29F\n", a);
	ft_printf("our: %2.29F\n", a);
	printf ("AAAAAAAAAAAAAA\n");
	printf("ori%2.29lf\n", a);
	ft_printf("our%2.29lf\n", a);
	printf("ori%2.29lf\n", 31465.00000);
	ft_printf("our%2.29lf\n", 31465.00000);*/
	printf("ori^.^/%#02.2zO^.^/\n", 59747488903416600);
	ft_printf("our^.^/%#02.2zO^.^/\n", 59747488903416600);
	return (0);
}
