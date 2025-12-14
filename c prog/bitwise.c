#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("enter a,b values");
	scanf("%d%d",&x,&b);
	a=x&y;
	printf("BITWISE AND=%d",a);
	b=x|y;
	printf("\nBITWISE OR=%d",b);
	return 0;
}
