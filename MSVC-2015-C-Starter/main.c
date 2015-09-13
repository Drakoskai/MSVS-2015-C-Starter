#include <stdio.h>

int main()
{
	printf("This is a native C program.\n");

#if _DEBUG
	printf("Press key to close");
	getchar();
#endif

	return 0;
}