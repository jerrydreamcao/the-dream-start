#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int sum = 0;
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0;i < 10;i++)
	{
		sum = sum + arr[i];
	}
	int avg = sum / 10;

	printf("avg=%d\n", avg);
	return 0;
}