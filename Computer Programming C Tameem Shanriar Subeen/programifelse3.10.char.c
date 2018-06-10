#include<stdio.h>
main()
{
char ch;
printf("Enter a alphabate:");
scanf("%c",&ch);
if(ch>='a' && ch<='z'){
printf("%c Is Lower Case\n",ch);
}
else if(ch>='A'&& ch<="Z"){
printf("%c Is Upper Case\n",ch);}
return 0;

}
