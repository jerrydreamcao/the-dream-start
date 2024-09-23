#include <stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//int len = strlen("abc");//求字符串的长度
	//printf("%d\n", len);
	

	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	return 0;
}