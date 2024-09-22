#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };//数组
	
	int i = 0;//引入i
	for (i = 0; i < 10; i++)//循环10次
	{
		scanf("%d", &arr[i]);//输入数
	}
	int max = arr[0];//引入max
	for (i = 1;i < 10;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);//输出
		return 0;
}