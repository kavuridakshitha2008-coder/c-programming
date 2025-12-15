#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i=0;
	fp=fopen("hello","w");
	while(i<20)
	{
		ch=fgetchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	return 0;
}
