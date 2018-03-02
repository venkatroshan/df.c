#include<stdio.h>
void main()
{
char c;
printf("enter  characters");
scanf("%c",&c);
if(c>='a' && c<='z')
{
printf("%c alphabets",c);
}
else
{
printf("%c not alphabets",c);
}
getch();
}
