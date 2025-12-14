#include<stdio.h>
int main()
{
	int i,n,a[100],min,max;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		else if(max,a[i])
		max=a[i];
	}
	printf("minimum value is = %d",min);
	printf("maximum value is = %d",max);
	return 0;
} 
