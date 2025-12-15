#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	
	int count=1;
	char ch;
	fp = fopen("file1.TXT","r");
	if(fp==NULL)
	{
		printf("file does not exist");
		exit(0);
	}
	while((ch = fgetc(fp)) !=EOF)
	{
		if(ch=='\n')
		{
			count++;
		}
	}
	fclose(fp);
	printf("%d",count);
	return 0;
}
