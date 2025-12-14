#include<stdio.h>
int main()
{
	int m,e,t,s,p,total;
	float avg;
	printf("enter 5 subjets marks");
	scanf("%d%d%d%d%d",&m,&e,&t,&s,&p);
	total=m+e+t+s+p;
	avg=total/5;
	printf("total is :%d",total);
	printf(/n"avg is :%f",avg);
	return 0;
}
