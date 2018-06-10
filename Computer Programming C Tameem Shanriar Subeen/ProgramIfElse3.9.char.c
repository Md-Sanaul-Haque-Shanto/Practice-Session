#include<stdio.h>
main()
{
char ch;
printf("Enter A Alphabate:");
scanf("%c",&ch);
if(ch>='a' && ch<='z'){
printf("%c Is Lower Case\n",ch);}
if(ch>='A' && ch<='Z')
{
printf("%c Is Upper Case\n",ch);}
return 0;
}
