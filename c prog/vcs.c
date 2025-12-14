#include<stdio.h>
int main()
{
    char line[150];
    int vowels,consonant,digit,space;
    vowels=consoonant=digit=space=0;
    printf("enter a line of string :");
    fgets(line,sizeof(line),stdin);
    for(int i=0;line[i]!='\0';++i)
    {
    line[i]=tolower(line[i]);
    if(line[i]=='a'||line[i]=='e'||line[i]=='o'||line[i]=='u'||line[i]=='i')
    {
        ==vowels;
    }
    else if((line[i]>='a'&&line[i]<='z'))
    {
        ++consonant;
    }
    else if(line[i]==' ')
    {
        ++space;
    }
}
printf("Vowels: %d", vowels);
printf("\nConsonants: %d", consonant);
printf("\nDigits: %d", digit);
printf("\nWhite spaces: %d", space);
return 0;
}