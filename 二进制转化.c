#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf("%d",&a);
	char str[30];
	itoa(a,str,2);
	printf("%s",str);
	
	return 0;
}
