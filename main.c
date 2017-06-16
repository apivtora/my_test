#include <stdio.h>

void b(void)
{
	printf("B\n");
}

int main()
{
	printf("Hello, World!\r\n");
	b();
	return(0);
}
