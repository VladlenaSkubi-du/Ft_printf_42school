# Ft_printf_42school
Ft_printf recodes (but not fully) the libc’s printf function.
This ft_pritnf deals with the following parameters:
1) types char, string and pointer - %c, %s, %p
2) types int, int in octal system, unsigned int, int in hexadecimal system (upper and lower case) - %d, %i, %o, %u, %x, %X, - and also %D (long and long long int), %O (long and long long int in octimal system), %U (unsigned long and long long int) with the modifiers h (short or unsigned short), hh (char or unsigned char), l (long int or unsigned long int) and ll(long long or unsigned long long)
3) types float, double and long double with the modifiers L - %f, %lf, %Lf and also %F that is a different type in some tests
4) it works with %%, with the precision, width and * instead of precision and width
5) flags #0-+ and space
6) And the bonus-type - the %b one which is int in binary

# Usage
There is a compile library libftprintf.a and different main files from the folder main_files/ that you can take from the folder to the main directory and compile with the library. In all the main files original printf and ft_printf output is compared. But if you really want to get the main idea of ft_printf project, it is better to write your own main-files.

So, your steps - 

Clone the repository:

	git clone https://github.com/VladlenaSkubi-du/Ft_printf_42school.git [folder's name you want]

Get into it and compile the project's libftprintf.a:

	make

You will see new folder obj/ and a library libftpritnf.a. After you make:

	gcc libftprintf.a main_all_types.c

Or other main-files you want but only one for one time. In ./a_out you will get the output of original printf and the ft_printf

	./a_out

**NOTE**: There can be warnings about the types, modificators and flags from the original printf but still it will give you result (undefined behavior) and ft_pritnf should have the same result. I hope. 
Go and try. Good luck!

# The function returns
The same output as the original printf with all the parameters described in the first part of README. Ft_printf does not work with the colors, with e, a, g and E, A, G types, with part of the unicode symbols and %v type. Also with $ and '. And maybe something else me and my teammate did not know about. Anyway, It does the main - prints most staff you want to print.

# Grade
# 112/100
