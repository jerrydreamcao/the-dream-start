#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };//����
	
	int i = 0;//����i
	for (i = 0; i < 10; i++)//ѭ��10��
	{
		scanf("%d", &arr[i]);//������
	}
	int max = arr[0];//����max
	for (i = 1;i < 10;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);//���
		return 0;
}