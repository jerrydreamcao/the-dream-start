#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int x, y;
	char ch;
	scanf("%d %c %d", &x, &ch, &y);
	switch (ch)
	{
		case'+':printf("%d", x + y);break;
		case'-':printf("%d", x - y);break;
		case'*':printf("%d", x * y);break;
		case'/':printf("%d", x / y);break;
		case'%':printf("%d", x % y);break;
	}

	return 0;

}