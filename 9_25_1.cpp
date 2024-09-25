#include<string.h>
#include <stdio.h>
int main()
{
	printf("c:\\test\\test.c\n");
	printf("(are you ok??)");
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("%s\n", "'");
	printf("\a\a\a");
	printf("%c\n", '\130');
	printf("%c\n", '\X30');
	printf("%d\n",strlen("c:\test\328\test.c"));

	return 0;
}
