#include<stdio.h>
main()
{
char ch;
printf("Enter Alphabate:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u')
{
printf("%c Is Vowel\n",ch);
}
else{printf("%c Is Consonante\n",ch);}
return 0;
}
