#include <stdio.h>

void disp(void)
{
	printf("%s\n"__func__);
}

int main(void)
{
	printf("Hello\n");
	return 0;
}

