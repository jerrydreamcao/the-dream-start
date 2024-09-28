#include <stdio.h>
int main()
{
	int a = 0;

	while (a < 20000)
	{
		printf("hehe:%d\n", a);
		a++;
	}
	if (a == 20000)
		printf("oooooo\n");

	return 0;
}