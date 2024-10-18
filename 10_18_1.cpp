#include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;
//	u_int a = 100;
//	printf("%d\n", a);
//	return 0;
//}


//void text()
//{
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//
//}
//
//
//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		text();
//		i++;
//	}
//
//
//	return 0;
//}

//extern int a;
//
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}

extern int Add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);

	return 0;
}