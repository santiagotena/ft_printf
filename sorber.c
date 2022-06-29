#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print_ints(int num, ...) // num is the number of arguments
{
	va_list args;

	va_start(args, num);

	for (int i = 0; i < num; i++)
	{
		int value = va_arg(args, int);
		printf("%d: %d\n", i, value);
	}
	va_end(args);
}

int main(void)
{
	print_ints(3, 24, 26, 312);
	// extra number of arguments ignored
	print_ints(7, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	return (0);
}