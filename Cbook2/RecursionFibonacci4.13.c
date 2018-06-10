#include<stdio.h>
#include<string.h>

int f_calls=0;
int fibi(int n)
{
f_calls=f_calls+1;
if(n==1||n==2)
{
return 1;
}
return fibi(n-1)+fibi(n-2);
}
int main()
{
int n;
char s[3];
scanf("%d",&n);
if(n==1)
{
strcpy(s,"st");
}
else if(n==2)
{
strcpy(s,"nd");
}
else if(n==3)
{
strcpy(s,"rd");
}
else {
strcpy(s,"th");
}
printf("%d%s Fibonacci Number Is %d\n",n,s,fibi(n));
printf("Number Of Function Calls:%d\n",f_calls);
return 0;
}
