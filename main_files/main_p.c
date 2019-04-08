#include <stdio.h>
#include "includes/ft_printf.h"

int		main(void)
{

	/*All with ints in 8-system*/
	
	printf("original: %31p\n", 0x0);
	ft_printf("our     : %31p\n\n", 0x0);

	printf("original: %31p\n", 0x36cea6ec);
	ft_printf("our     : %31p\n\n", 0x36cea6ec);

	printf("original: %-4pA\n", 0x0);
	ft_printf("our     : %-4pA\n\n", 0x0);

	printf("original: \\!/%43p\\!/\n", 0x5ac5da19);
	ft_printf("our     : \\!/%43p\\!/\n\n", 0x5ac5da19);
	
	printf("original: %12p\n", 0x26eaf0cd);
	ft_printf("our     : %12p\n\n", 0x26eaf0cd);
	
	printf("original: %.1p\n", 0x26eaf0cd);
	ft_printf("our     : %.1p\n\n", 0x26eaf0cd);

	//scripts
	printf("SCRIPTS\n");
	printf("original: 42%12p42\n", 0x6c649b0a);
	ft_printf("our     : 42%12p42\n\n", 0x6c649b0a);
	
	return (0);
}
