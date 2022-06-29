#include <stdarg.h>
#include <stdio.h>

int Hello_greet_plz(char *arg, ...)
{
	va_list list;
	va_start(list, arg);
	printf("%s number %d", "Siemanko", 12);
	int a = va_arg(list, int);
	printf("\nnumber in va_arg passed%d\n", a);
	char *str = va_arg(list, char *);
	printf("Kurwa %s", str);
	va_end(list);
}

int main(void)
{
	Hello_greet_plz("%d Hello", 1, "Siemanko");
}

