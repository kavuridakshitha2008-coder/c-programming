#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("file1.txt","r");
	if(fs==NULL)
	{
		printf("file does not exist");
		exit(0);
	}
	ft=fopen("file2.txt","w");
	if(ft==NULL)
	{
		printf("unable to create a file");
		exit(0);
	}
	ch=fgetc(fs);
	while(ch!=EOF)
	{
		fputc(ch,ft);
		ch=fgetc(fs);
	}
	fclose(fs);
	fclose(ft);
	return 0;
}
