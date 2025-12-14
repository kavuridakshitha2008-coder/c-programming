#include<stdio.h>
int main()
{
	float a,b,c,avg;
	printf("enter a,b,c values");
	scanf("%f%f%f",&a,&b,&c);
	avg=a+b+c/3;
	printf("average is:%f",avg);
	return 0;
}
