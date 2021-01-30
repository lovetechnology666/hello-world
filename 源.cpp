#include  <stdio.h>
#include  <string.h>
int main()
{
	char arr1[]="abcd";
	char arr2[] = { 97, 'b', 'c', 'd' };
	char arr3[] = "97bcd";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("\a\a\a\a");
	return 0;
}